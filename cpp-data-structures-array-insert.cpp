#include <iostream>
#include<stdlib.h>

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
	cout << "Elements are " << endl;
	for (i = 0; i < arr.length; i++)
		cout << " " << arr.A[i];
}

void Append(struct Array* arr, int x) {				// function to add an element to the end of the array
	if (arr->length < arr->size)
		arr->A[arr->length++] = x;
}

void Insert(struct Array* arr, int index, int x)   // function to insert an element at a given index
{
	int i;

	if (index >= 0 && index <= arr->length)       // checks for valid index and array length
	{
		for (i = arr->length; i > index; i--)
			arr->A[i] = arr->A[i - 1];
		arr->A[index] = x;
		arr->length++;
	}
}

int main()
{
	struct Array arr = {{2,3,4,5,6},10,5 };

	Append(&arr, 10);							// add 10 to the end of the array address
	Insert(&arr, 0, 12);						// insert 12 at position 0 to the array address
	Display(arr);								// function call to display elements

	return 0;
}