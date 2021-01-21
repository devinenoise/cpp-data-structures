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
		x = p->data;										// move x to the next position
		p = p->next;										// move p to the next position
	}
	return 1;
}


int main() {

	int A[] = { 1,5,7,9,11 };
	create(A, 5);
		

	if (checkSort(first)) {
		cout << "Sorted" << endl;
	}
	else
		cout << "Not Sorted" << endl;

	return 0;
}