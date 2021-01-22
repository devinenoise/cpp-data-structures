#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node* next;												// self-referencial member pointer
}

*first = NULL, * second = NULL , * third = NULL;



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

}void create2(int A[], int n)											// creating a linked list from an array
{
	int i;
	struct Node* t, * last;
	second = new Node;
	second->data = A[0];
	second->next = NULL;
	last = second;

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

void Concat(struct Node* p, struct Node *q)
{
	third = p;
	
	while (p->next != NULL)											// scan through first linked list
	{
		p = p->next;

	}
		p->next = q;													// concat first linked list to 2nd list	
	
}

void Merge(struct Node* p, struct Node* q)								// merge and sort two linked lists
{
	struct Node* last;
	if (p->data < q->data)
	{
		third = last = p;
		p = p->next;
		third->next = NULL;
	}
	else
	{
		third = last = q;
		q = q->next;
		third->next = NULL;
	}
	while (p && q)
	{
		if (p->data < q->data)
		{
			last->next = p;
			last = p;
			p = p->next;
			last->next = NULL;
		}
		else
		{
			last->next = q;
			last = q;
			q = q->next;
			last->next = NULL;
		}
	}

	if (p)
	{
		last->next = p;
	}
	if (q)
	{
		last->next = q;
	}

}


int main() {

	int A[] = { 1,5,5,7,9,11,11,13,15,16 };
	create(A, 10);

	int B[] = { 2,3,4,6 };
	create2(B, 4);
	Display(first);

	Concat(first, second);											// adds second onto end of first
	Merge(first, second);											// merges the two lists and sorts them
		
	Display(third);

	return 0;
}