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


int main()
{


	int A[] = { 3,5,7,9,11 };
	create(A, 5);
	RDisplay(Head);


	return 0;
}