#include <iostream>
using namespace std;

class Stack {
private:
	int size;
	int top;
	char* S;												// array for storing elements in the stack

public:
	Stack(int size);
	~Stack();
	void push(char x);
	char pop();
	int isFull();
	int isEmpty();
	
};

Stack::Stack(int size)
{
	this->size = size;
	top = -1;
	S = new char[size];
}

Stack::~Stack() {
	delete[] S;
}


void Stack::push(char x) {
	if (isFull()) {
		cout << "stack overflow" << endl;
	}
	else {
		top++;
		S[top] = x;
	}
}

char Stack::pop() {
	char x = -1;
	if (isEmpty()) {
		cout << "stack underflow" << endl;
	}
	else {
		x = S[top];
		top--;
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


int isBalanced(char* exp)
{
	Stack st((int)strlen(exp));													// create a stack

	for (int i = 0; i < strlen(exp); i++) {										// process the expression
		if (exp[i] == '(') {													// ( found push to stack
			st.push(exp[i]);
		}
		else if (exp[i] == ')') {												// ) found
			if (st.isEmpty()) {													// ) found and stack is empty: unbalanced
				return false;
			}
			else                                                                 // ) and stack is not empty
				st.pop();
		}
	}
	return st.isEmpty() ? true : false;										// If stack is empty then balanced else unbalanced
}

int main() {


	char E[] = "((a+b)*(c-d))";
	cout << isBalanced(E) << endl;

	char F[] = "((a+b)*(c-d)))";
	cout << isBalanced(F) << endl;

	char G[] = "(((a+b)*(c-d))";
	cout << isBalanced(G) << endl;
	return 0;


	return 0;
}