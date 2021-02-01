#include <iostream>
using namespace std;


class Node
{
public:
	int data;
	Node* next;
};

class Stack
{
private: Node* top;

public:
	Stack();
	void push(int x);
	int pop();
	int peek(int index);
	int isEmpty();
	int isFull();
	int stackTop();
	void Display();
	~Stack();
};

Stack::Stack() {												// constructor
	top = nullptr;
}



void Stack::push(int x) {
	Node* t = new Node;
	if (t == nullptr) {
		cout << "stack is full" << endl;
	}
	else {
		t->data = x;
		t->next = top;
		top = t;
	}
}

int Stack::pop() {
	Node* t;
	int x = -1;
	if (top == nullptr) {
		cout << "stack is empty" << endl;
	}
	else {
		t = top;
		x = t->data;
		top = top->next;
		delete t;
	}
	return x;
}

int Stack::peek(int index) {
		Node* p = top;

	if (isEmpty()) {
		cout << "invalid index" << endl;
	}
	else {
		Node* p = top;
		for (int i = 0; p != NULL && i < index - 1; i++) {
			p = p->next;
		}
		if (p != NULL)
			return p->data;
		else
			return -1;
	}
	
}

int Stack::stackTop() {
	if (top) {
		return top->data;
	}
	return -1;
}

int Stack::isFull() {
	Node* t = new Node;
	int r = t ? 1 : 0;
	delete t;
	return r;
}

int Stack::isEmpty() {
	return top ? 0 : 1;
}

void Stack::Display()
{
	struct Node* p;
	p = top;
	while (p != NULL)
	{
		cout << p->data << " | ";
		p = p->next;
	}
	cout << endl;
}

Stack::~Stack() {
	Node* p = top;
	while (top) {
		top = top->next;
		delete p;
		p = top;
	}
}

int main() {

	Stack st;

	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);


	cout << "Stack: ";
	st.Display();

	cout << "Peek at 3rd: " << st.peek(3) << endl;
	cout << "Peek at 4th: " << st.peek(4) << endl;
	cout << "Peek at 2nd: " << st.peek(2) << endl;

	cout << "You popped " << st.pop() << " from the list" << endl;

	cout << "Stack empty: " << st.isEmpty() << endl;

	return 0;
}