#include <iostream>

using namespace std;


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

void InsertSort(struct Array *arr, int x) {				// insert a new element into a sorted list by value
	
	int i = arr->length - 1;

	if (arr->length == arr->size)
		return;

	while (i>=0 && arr->A[i] > x) {					// checks index value is above 0 and greater		                                                  than the number being inserted
		arr->A[i + 1] = arr->A[i];					// shifts the checked number to the right 1 position
		i--;
	}
	arr->A[i + 1] = x;								// insert new element
	arr->length++;									// increase array length
}


int isSorted(struct Array arr) {
	int i;

	for (i = 0; i < arr.length - 1; i++)
	{
		if (arr.A[i] > arr.A[i + 1])				// checks if already sorted
			return 0;								// 0 is false
	}
	return 1;										// 1 is true
}



void Rearrange(struct Array* arr) {					// sort negatives on the left & positives on the right

	int i = 0;										// start at [0]
	int j = arr->length - 1;						// start at array end

	while(i<j)
	{
		while (arr->A[i] < 0)						// i increments until it reaches a positive
			i++;
		
		while (arr->A[j] >= 0)						// j decrements until it reaches a negative
		j--;
		
		if (i < j)									// negatives on left, positives on right
		swap(&arr->A[i], &arr->A[j]);				// swap negative with positive
	}
}

int main() {

	struct Array arr = { {2,-3,5,10,-15,-7},10,6 };

	cout << isSorted(arr) << endl;							// checks for sorting returns 0 or 1

	InsertSort(&arr, 20);									

	Rearrange(&arr);

	Display(arr);

	return 0;
}