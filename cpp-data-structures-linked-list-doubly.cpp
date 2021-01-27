#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node *next, *prev;										// self-referencial member pointer
} *first = NULL;



void create(int A[], int n)											// creating a linked list from an array
{
	struct Node* t, * last;
	int i;
	first = new Node;
	first->data = A[0];
	first->prev = first->next = NULL;
	last = first;

	for (i = 1; i < n; i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = last->next;
		t->prev = last;
		last->next = t;
		last = t;
		
	}
}


void Display(struct Node* p)											// display the linked list elements
{
	while (p)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}


int Length(struct Node* p)
{
	int len = 0;

	while (p)
	{
		len++;
		p = p->next;
	}
	return len;
}


int main()
{


	int A[] = { 3,5,7,9,11 };
	create(A, 5);

	cout << "Length is : " << Length(first) << endl;
	Display(first);


	return 0;
}