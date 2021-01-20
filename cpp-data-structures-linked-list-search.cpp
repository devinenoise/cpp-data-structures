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

int Max(struct Node* p)										// find the maximum element value
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

struct Node * LSearch(struct Node* p, int key)						// linear search for an element and moves it to front position
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

struct Node * RSearch(struct Node* p, int key)					// linear search done recursively
	{
		if (p == NULL)
			return NULL;
		if (key == p->data) {
			return p;
		}
		return RSearch(p->next, key);
	}

void Display(struct Node* p)											// display the linked list elements
{
	while (p != NULL)
	{
		cout << p->data << endl;
		p = p->next;
	}
}



int main() {
	struct Node* temp;

	int A[] = { 3,5,7,10,25,8,32,2 };
	create(A, 8);

	temp = LSearch(first,25);
	temp = LSearch(first, 8);
	if (temp)
		cout << "Your key: "<< temp->data <<", was found " << endl;
	else
		cout << "Key not found" << endl;

	cout << "The max element is " << Max(first) << endl;
	cout << "The max element is " << Rmax(first) << endl;

	Display(first);													// shows 8 has moved to the front before 25

	return 0;
}