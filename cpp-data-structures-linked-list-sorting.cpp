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

int checkSort(struct Node* p)
{
	
	int x = INT32_MIN;										// x is used to compare values
	while (p != NULL)										// as long as p hasn't reached the end of the list
	{
		if (p->data < x) {									// if p is less than x before it, the list is not sorted
			return 0;
		}
		x = p->data;										// set x to the prev position
		p = p->next;										// move p to the next position
	}
	return 1;
}

void RemoveDuplicate(struct Node* p)							// removing duplicates from a sorted linked list
{
	Node* q = first->next;										// q is 2nd position
	cout << "Checking and removing duplicates..." << endl;
	while (q != NULL)
	{
		if (p->data != q->data)									// checking if duplicate
		{
			p = q;												// moving p forward
			q = q->next;										// moving q forward
		}
		else
		{
			p->next = q->next;
			delete q;
			q = p->next;
		}
	}



}

int main() {

	int A[] = { 1,5,5,7,9,11,11,13,15,16 };
	create(A, 10);
	
	Display(first);

	if (checkSort(first)) {
		cout << "List is Sorted" << endl;
	}
	else
		cout << "List is Not Sorted" << endl;

	RemoveDuplicate(first);

	Display(first);


	return 0;
}