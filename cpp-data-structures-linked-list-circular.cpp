#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node* next;												// self-referencial member pointer
}

*Head;



void create(int A[], int n)											// creating a linked list from an array
{
	int i;
	struct Node* t, *last;
	Head = new Node;
	Head->data = A[0];
	Head->next = Head;
	last = Head;
	
	for (i = 1; i < n; i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = last->next;
		last->next = t;
		last = t;
	}
}


void Display(struct Node* h)											// display the circular linked list
{
	
	do																	// the do while loop will execute once to skip p!= head
	{
		cout << h->data << " ";
		h = h->next;

	} while (h != Head);                                                // ends the loop after reaching the ending and pointing back to head
		
		cout << " " << endl;
}

void RDisplay(struct Node* h)											// display the circular list recursively
{
	static int flag = 0;
	if (h != Head || flag == 0)
	{
		flag = 1;
		cout << h->data << " ";
		RDisplay(h->next);
	}

	flag = 0;
	}

int count(struct Node* p)											// count a circular linked list
{
	int count = 0;
	
	do {
		count++;
		p = p->next;
	} while (p != Head);
	return count;
}

void Insert(struct Node* p, int index, int key)						// insert node at given position
{
	struct Node* t;
	int i;

	if(index < 0 || index > count(p))
		return;

	if (index == 0)													// checks the validity of the index
	{
		t = new Node;													// create new node
		t->data = key;													// put data in new node

		if (Head == NULL)												// put the new node on first position
		{
			Head = t;
			Head->next = Head;
		}
		else
		{
			while (p->next != Head)
				p = p->next;
			p->next = t;
			t->next = Head;
			Head = t;
		}
	}
	else 
	{
		for (i = 0; i < index - 1; i++)
		p = p->next;
		t = new Node;
		t->data = key;
		t->next = p->next;
		p->next = t;
	}
	
}

int Delete(struct Node* p, int index)
{
	struct Node* q;
	int i;
	int x;

	if (index < 0 || index > count(Head))							// checks if list is valid
		return -1;

	if (index == 1)												// if there's only one item
	{
		p = Head;
		while (p->next != Head)
		p = p->next;
		x = Head->data;

		if (Head == p)
		{
			delete Head;
			Head = NULL;
		}
		else
		{
			p->next = Head->next;
			delete Head;
			Head = p->next;
		}
	}	else 
		{
			for (i = 0; i < index - 2; i++)							// loop through the list to find the index
			p = p->next;											// p moves forward
			q = p->next;
			p->next = q->next;
			x = q->data;
			delete q;
	}
		return x;
}

int main()
{


	int A[] = { 3,5,7,9,11 };
	create(A, 5);
	
	Insert(Head, 5, 10);
	
	Delete(Head, 1);

	Display(Head);
	
	
	return 0;
}