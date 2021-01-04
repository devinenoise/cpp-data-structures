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
	cout << "Elements are" ;
	for (i = 0; i < arr.length; i++)
		cout << " " << arr.A[i];
	cout << endl;
}

int Get(struct Array arr, int index) {				// get an element at a given index
	
	if (index >= 0 && index < arr.length)
	 return	arr.A[index];
	 return -1;
}

int Set(struct Array *arr, int index, int x) {		// set an element at a given index
	
	if (index >= 0 && index < arr->length)
	return arr->A[index] = x;
}

int Max(struct Array arr) {							// find the maximum element value in the array
	
	int max = arr.A[0];
	int i;
	for (i = 1; i < arr.length; i++)
	{
		if (arr.A[i] > max)
			max = arr.A[i];
	}
	return max;
}

int Min(struct Array arr) {						// find the minimum element value in the array
	
	int min = arr.A[0];
	int i;
	for (i = 1; i < arr.length; i++)
	{
		if (arr.A[i] < min)
			min = arr.A[i];
	}
	return min;
}

int Sum(struct Array arr) {						// return the sum of all elements in the array
	
	int total = 0;
	int i;
	
	for (i = 0; i < arr.length; i++)
	{
		total = total + arr.A[i];
	}
	return total;
}

float Avg(struct Array arr) {						// return the average of all elements in the array
	
	return (float)Sum(arr)/arr.length;
}


int main() {

	struct Array arr = { {2,3,4,5,6},10,5 };

	Display(arr);
		
	cout << "The element at index 1 is " << Get(arr, 1) << endl;
	cout<< "The new element at index 2 is now " << Set(&arr, 2, 4) << endl;
	cout<< "The min element value is " << Min(arr) << endl;
	cout<< "The max element value is " << Max(arr) << endl;
	cout<< "The total of all elements is " << Sum(arr) << endl;
	cout<< "The average of all elements is " << Avg(arr) << endl;

	return 0;
}