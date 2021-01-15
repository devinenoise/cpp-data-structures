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

int max(struct Node* p)										// find the maximum element value
{
	int maximum = INT32_MIN;
	
	while (p)
	{
		if (maximum < p->data)
		{
			maximum = p->data;
		}
		p = p->next;
	}

	return maximum;
}

int Rmax(struct Node* p)									// find the maximum element value with recursion
{
	int x = 0;
	
	if (p == 0)
	{
		return INT32_MIN;
	}
		x = Rmax(p->next);
		
		return x>p->data?x:p->data;
}

int main() {

	int A[] = { 3,5,7,10,15 };
	create(A, 5);

	cout << "The max element is " << max(first) << endl;
	cout << "The max element is " << Rmax(first) << endl;

	return 0;
}