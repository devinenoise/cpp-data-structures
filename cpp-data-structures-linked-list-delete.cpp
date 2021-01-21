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

struct Node* LSearch(struct Node* p, int key)						// linear search for an element and moves it to front position
{
	struct Node* q = NULL;

	while (p != NULL) {
		if (key == p->data)
		{
			if (p != first)
			{
				q->next = p->next;
				p->next = first;
				first = p;
				return p;
			}

		}
		q = p;
		p = p->next;
	}
	return NULL;
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

int count(struct Node* p)									// count a linked list
{
	int count = 0;

	while (p)
	{
		count++;
		p = p->next;
	}
	return count;
}

int DeleteNode(struct Node* p, int index)
{
	struct Node *q = NULL;										// trailing pointer to follow p
	int x = -1;
	int i;

	if (index < 1 || index > count(p))							// checks if list is valid
		return -1;
		
	if (index == 1)												// if there's only one item
	{
		q = first;
		x = first->data;
		first = first->next;
		delete q;
		return x;
	}
	else
	{
		p = first;
		q = NULL;
		for (i = 0; i < index - 1 ; i++)							// loop through the list to find the index
		{
			q = p;													// q follows p
			p = p->next;											// p moves forward
		}
		q->next = p->next;
		x = p->data;
		delete p;
		return x;
	}
	
}

int main() {

	int A[] = { 3,5,7,9,11 };
	create(A, 5);


	Display(first);

	DeleteNode(first, 4);

	Display(first);

	return 0;
}