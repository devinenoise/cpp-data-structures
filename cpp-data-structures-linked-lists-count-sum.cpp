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


int Rcount(struct Node* p)									// count a linked list recursively
{
	if (p == 0)
	{
		return 0;
	}
	else
		return Rcount(p->next) + 1;

}

int sumList(struct Node* p)										// sum the data in all the nodes
{
	int sum = 0;

	while (p)
	{
		sum = sum + p->data;
		p = p->next;
	}
	return sum;

}

int RsumList(struct Node* p)									// sum all node data using recursion
{

	if (p == 0)
	{
		return 0;
	}
	else
		return RsumList(p->next) + p->data;
}


int main() {

	int A[] = { 3,5,7,10,15 };
	create(A, 5);

	cout << "Length is " << count(first) << endl;

	cout << "Length is " << Rcount(first) << endl;

	cout << "Sum is " << sumList(first) << endl;

	cout << "Sum is " << RsumList(first) << endl;


	return 0;
}