#include <iostream>

using namespace std;


struct Node {

	int data;
	struct Node* next;


}

*head = new Node;

void create(int A[], int n)											// creating a doubly linked list from an array
{
	Node* t, * tail;
	int i;
	head->data = A[0];
	head->next = NULL;
	tail = head;

	for (i = 1; i < n; i++)
	{
		t = new Node;
		t->data = A[i];
		t->next = NULL;
		tail->next = t;
		tail = t;

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

void middleNode2(struct Node* p)
{
	struct Node* q;
	p = q = head;
	
	while (q)											// as long as q is not NULL
	{
			q = q->next;								// sets q one step ahead
			if(q) q = q->next;							// sets q two steps ahead
			if (q) p = p->next;							// p follows q half as many steps behind q
	}
	cout << "Middle Element (Method-II): " << p->data << endl;
}

void middleNode1(Node* p) {
	int length = 0;
	while (p) {											// incrementing p to length of linked list
		length++;
		p = p->next;
	}

	int index = (int)ceil(length / 2.0);				// using half the length for middle rounded up with ceil
	Node* q = head;
	for (int i = 0; i < index - 1; i++) {				// setting q to half the length of p
		q = q->next;
	}
	cout << "Middle Element (Method-I): " << q->data << endl;
}

int main() {


	int A[] = { 3,5,7,9,11,13,15 };
	create(A, 7);

	Display(head);

	middleNode1(head);
	middleNode2(head);





	return 0;
}