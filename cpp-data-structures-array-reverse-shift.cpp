#include <iostream>

using namespace std;

// (->) arrow operator is to access members of a structure through a pointer

struct Array
{
	int A[10];
	int size;
	int length;

};


void Display(struct Array arr)						// function to display the array's elements
{
	int i;
	cout << "Elements are";
	for (i = 0; i < arr.length; i++)
		cout << " " << arr.A[i];
	cout << endl;
}

void swap(int* x, int* y)							// swap function using pointers
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void Reverse(struct Array *arr) {
	int* B;
	int i, j;

	B = new int(arr->length);						// creating second array from Heap

	for (i = arr->length - 1, j = 0; i >= 0; i--, j++)		// i starts at array end and j starts at [0]
	{
		B[j] = arr->A[i];								// copy an elements from A to B in reverse
	}
	for (i = 0; i < arr->length; i++)
	{
		arr->A[i] = B[i];								// copy all elements from B to A
		}

}

void Reverse2(struct Array* arr)						// reverse array with Swap() function
{
	int i, j;
	for (i = 0, j = arr->length - 1; i < j; i++, j--)
	{
		swap(&arr->A[i], &arr->A[j]);
	}
}

int main() {

	struct Array arr = { {2,3,4,5,6},10,5 };
	

	Display(arr);
	Reverse(&arr);
	Display(arr);
	
	return 0;
}