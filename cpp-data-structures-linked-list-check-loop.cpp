#include <iostream>

using namespace std;


struct Node {

	int data;														// data member
	struct Node* next;												// self-referencial member pointer
}

*first = NULL, * second = NULL, * third = NULL;



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

int isLoop(struct Node* f)										// f is first node pointer
{
	Node* p, * q;												// accessing pointers
	p = q = f;
	
	do                                                          // checking for loop
	{
		p = p->next;
		q = q->next;
		q = q ? q->next : NULL;									// as long as q is not equal to null, keep moving
	} 
	while (p && q && p != q);									// continue until finding a loop
	if (p == q)
		return 1;
	else
		return 0;
}


int main() {

	struct Node* t1, * t2;
	int A[] = { 10,20,30,40,50};
	create(A, 5);

	t1 = first->next->next;											// t1 is 30
	t2 = first->next->next->next->next;								// t2 is 50
	t2->next = t1;													// t2 loops to t1

	if (isLoop(first))
		cout << "Is A Loop" << endl;
	else
		cout << "Not a Loop" << endl;

	return 0;
}