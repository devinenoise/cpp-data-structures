#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node* next;												// self-referencial member pointer
}

*first=NULL;



void create(int A[], int n)											// creating a linked list from an array
{
	int i;
	struct Node* t,*last;
	first = new Node;
	first->data = A[0];
	first->next = NULL;
	last = first;

	for (i = 1; i < n; i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}

}


void Display(struct Node *p)											// display the linked list elements
{
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}




int main() {


	int A[] = { 3,5,7,10,15 };
	create(A, 5);

	Display(first);


	return 0;
}