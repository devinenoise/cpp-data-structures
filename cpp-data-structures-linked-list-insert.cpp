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
		cout << p->data << " " ;
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

void Insert(struct Node* p, int index, int key)							// insert node at given position
{
	struct Node *t;
	int i;

	if (index < 0 || index > count(p))									// checks the validity of the index
		
		return;
	t = new Node;														// create new node
	t->data = key;														// put data in new node
	
	if (index == 0)														// put the new node on first position
	{
		t->next = first;
		first = t;
	}
	else  
	{
		for (i = 0; i < index - 1; i++)				// loop through the list with p to find the desired index - 1
									
			p = p->next;
			t->next = p->next;
			p->next = t;
		
	}
	
}


int main() {

	int A[] = { 3,5,7,9,11};
	create(A, 5);
	Display(first);
	
	Insert(first, 2, 10);

	Display(first);


	return 0;
}