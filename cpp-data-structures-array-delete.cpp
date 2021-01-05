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

int Delete(struct Array *arr, int index)		// defining an array pointer and given index parameter
{
	int x = 0;
	int i;										// created to shift values

	if (index >= 0 && index < arr->length)      // checking the index length
	{
		x = arr->A[index];						  // x becomes the value from a given index
		for (i = index; i < arr->length - 1; i++) // starting at index, i should be less than the length -1                                               because of the shift
			arr->A[i] = arr->A[i + 1];			 // copy an element from A of index plus 1
		arr->length--;							 // after shifting all the elements make the array smaller
		return x;
	}
	
	return 0;
}

int main()
{
	struct Array arr = { {2,3,4,5,6},10,5 };

	cout << "You are deleting element " << Delete(&arr, 3) << endl;
	Display(arr);
	
	
	return 0;
}