#include <iostream>
using namespace std;

class Stack {
private:
	int size;
	int top;
	int* S;												// array for storing elements in the stack

public:
	Stack(int size);
	~Stack();
	void Display();
	void push(int x);
	int pop();
	int peek(int index);
	int isFull();
	int isEmpty();
	int stackTop();

};

Stack::Stack(int size)
{
	this->size = size;
	top = -1;
	S = new int[size];
}

Stack::~Stack() {
	delete S;
}

void Stack::Display() {
	int i;
	for (i = top; i >= 0; i--)
		cout << S[i] << " | ";
	cout << endl;
}

void Stack::push(int x) {
	if (isFull()) {
		cout << "stack overflow" << endl;
	} else {
		top++;
		S[top] = x;
	}
}

int Stack::pop() {
	int x = -1;
	if (isEmpty()) {
		cout << "stack underflow" << endl;
	}else {
		x = S[top];
		top--;
	}
	return x;
}

int Stack::peek(int index) {
	int x = -1;
	if (top - index + 1 < 0) {
		cout << "invalid index" <<endl;
	} else {
		x = S[top - index + 1];
	}
		return x;
}

int Stack::isFull() {
	if (top == size - 1) {
		return 1;
	} return 0;
}

int Stack::isEmpty() {
	if (top == -1) {
		return 1;
	} 
	return 0;
}

int Stack::stackTop() {
	if (!isEmpty())
		return S[top];
	return -1;
}

int main() {

	Stack st(5);
	
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

	cout << "Top element: " << st.stackTop() << endl;

	st.pop();

	cout << "Stack empty: " << st.isEmpty() << endl;

	return 0;
}