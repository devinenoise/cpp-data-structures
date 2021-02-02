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
	int stackTop();

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

int Stack::stackTop() {
	if (isEmpty())
		return -1;
	else
		return S[top];
}

int isBalanced(char* exp)
{
	Stack st((int)strlen(exp));													// create a stack

	for (int i = 0; exp[i] != '\0'; i++) {										// process the expression
		if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[') {					// (,{,[ found push to stack
			st.push(exp[i]);
		}
		else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {				// ),},] found
			if (st.isEmpty()) 													// ) found and stack is empty: unbalanced
				return false;
			else if ((exp[i] == st.stackTop() + 1) || (exp[i] == st.stackTop() + 2))     // matching the symbols with the top stack ASCII       
				st.pop();
			else
				return false;
		}
	}
	return st.isEmpty() ? true : false;										// If stack is empty then balanced else unbalanced
}

int main() {

	char A[] = "{([a+b]*[c-d])/e}";
	if (isBalanced(A)) {
		cout << "Matched" << endl;
	}
	else {
		cout << "Not matched" << endl;
	}

char B[] = "{([a+b]}*[c-d])/e}";
		if (isBalanced(B)) {
			cout << "Matched" << endl;
		}
		else {
			cout << "Not matched" << endl;
		}

char C[] = "{([{a+b]*[c-d])/e}";
		if (isBalanced(C)) {
			cout << "Matched" << endl;
		}
		else {
			cout << "Not matched" << endl;
		}
	return 0;
}