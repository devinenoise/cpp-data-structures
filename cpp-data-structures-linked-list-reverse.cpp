#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node* next;												// self-referencial member pointer
}

*first = NULL;



void create(int A[], int n)											// creating a linked list from an array
{
	int i;
	struct Node* t, * last;
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

void Display(struct Node* p)											// display the linked list elements
{
	while (p != NULL)
	{
		cout << p->data << " ";
		p = p->next;

	}
	cout << endl;
}

void Reverse(struct Node* p)										// reverse a linked list
{
	cout << "Reversing..." << endl;
	p = first;
	Node* q = NULL;
	Node *r = NULL;
	while (p != NULL)
	{
		r = q;
		q = p;
		p = p->next;
		q->next = r;
	}
	first = q;
}

void RecReverse (struct Node *q, struct Node *p)					// reverse linked list recursively
{

	if (p) 
	{
		RecReverse(p, p->next);
		p->next = q;
	}
	else
	{
		first = q;
	cout << "Reversing recursively..." << endl;
	}
}


int main() {

	int A[] = { 1,5,5,7,9,11,11,13,15,16 };
	create(A, 10);

	Display(first);

	Reverse(first);

	Display(first);

	RecReverse(NULL, first);											// q starts at NULL and p is first

	Display(first);

	return 0;
}