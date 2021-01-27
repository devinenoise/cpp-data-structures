#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node *next, *prev;										// self-referencial member pointer
} *first = NULL;



void create(int A[], int n)											// creating a doubly linked list from an array
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

void Insert(struct Node* p, int index, int x)
{
	struct Node* t;
	int i;
	cout << "*Node inserted " << endl;

	if (index < 0 || index > Length(p))
		return;

	if (index == 0) {
		t = new Node;
		t->data = x;
		t->prev = NULL;
		t->next = first;
		first->prev = t;
	} else 
	{
		for (i = 0; i < index - 1; i++)
			p = p->next;
		t = new Node;;
		t->data = x;
		t->prev = p;
		t->next = p->next;
		
	if (p->next) 
	
		p->next->prev = t;
		p->next = t;
	}
}

int Delete(struct Node* p, int index)
{
	int x = -1;
	int i;
	cout << "*Deleting a node.." <<endl;

	if (index < 1 || index > Length(p))
		return -1;

	if (index == 1)
	{
		first = first->next;
		if (first)first->prev = NULL;
		x = p->data;
		delete p;
		
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			p = p->next;
		p->prev->next = p->next;
		if (p->next)
			p->next->prev = p->prev;
		x = p->data;
		delete p;
	}

}



int main()
{


	int A[] = { 3,5,7,9,11 };
	create(A, 5);

	cout << "Length is : " << Length(first) << endl;
	Display(first);

	Insert(first, 5, 10);

	Display(first);

	Delete(first, 6);

	Display(first);

	return 0;
}