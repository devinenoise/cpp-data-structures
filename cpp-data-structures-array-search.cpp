#include <iostream>

using namespace std;

// (->) arrow operator is to access members of a structure through a pointer

struct Array
{
	int A[10];
	int size;
	int length;

};


void Display(struct Array arr)						// Display the array's elements
{
	int i;
	cout << "Elements are " << endl;
	for (i = 0; i < arr.length; i++)
		cout << " " << arr.A[i];
}

void swap(int* x, int* y)							// swap function using pointers
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int LinearSearch(struct Array *arr, int key) 				// Linear search function
{
	int i;
	for (i = 0; i < arr->length; i++)
	{
		if (key == arr->A[i])								// checking if key matches element
		{
			swap(&arr->A[i], &arr->A[0]);				   // swap index position to position 0
			return i;
		}
	}
	return -1;												// return -1 if unsuccessful
}


int BinarySearch(struct Array arr, int key) {				// Binary search function
	
		int l, mid, h;										// defining low mid and high
		l = 0;
		h = arr.length - 1;
		
		while (l <= h)										// only run the loop while low is <= high
		{
			mid = (l + h) / 2;								// mid is low plus high divided by 2
			if (key == arr.A[mid])
				return mid;
			else if (key < arr.A[mid])
				h = mid - 1;
			else
				l = mid + 1;
		}
		return -1;
	}

int RBinarySearch(int a[], int l, int h, int key) {			// Recursive Binary search

	int mid;										
	
	if (l <= h)
	{
		mid = (l + h) / 2;
		if (key == a[mid])
			return mid;
		else if (key < a[mid])
			return RBinarySearch(a, l, mid - 1, key);
		else
			return RBinarySearch(a, mid + 1, h, key);
	}
	return -1;
}

int main()
{
	struct Array arr = { {2,3,4,5,6},10,5 };
	
	struct Array arr2 = { {8,31,43,55,61},10,5 };

	cout << "Linear Search index is " << LinearSearch(&arr, 5) << endl;		// outputs the index position and																			swaps it to position 0
	
	cout << "Binary Search index is " << BinarySearch(arr2, 55) << endl;
	
	cout << "Recursive Binary Search index is " << RBinarySearch(arr2.A, 0, arr.length, 55) << endl;

	return 0;
}