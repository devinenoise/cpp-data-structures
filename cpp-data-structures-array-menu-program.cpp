#include <iostream>
#include <stdlib.h>
using namespace std;


class Array
{
private:
	int *A;
	int size;
	int length;
	void swap(int *x, int *y);					

public:
	
	Array()
	{
		size = 10;
		length = 0;
		A = new int[size];
	}
	Array(int sz)
	{
		size = sz;
		length = 0;
		A = new int[size];
	}
	~Array()
	{
		delete []A;
	}

	void Display();						// function to display the array's elements
	void Append(int x);			// function to add an element to the end of the array
	void Insert(int index, int x);   // function to insert an element at a given index
	int Delete(int index);		// defining an array pointer and given index parameter
	int LinearSearch(int key);				// Linear search function
	int BinarySearch(int key);			// Binary search function
	int Get(int index);			// get an element at a given index
	void Set(int index, int x);	// set an element at a given index
	int Max();						// find the maximum element value in the array
	int Min();					// find the minimum element value in the array
	int Sum();				// return the sum of all elements in the array
	float Avg();						// return the average of all elements in the array
	void Reverse();
	void Reverse2();					// reverse array with Swap() function
	void InsertSort(int x);				// insert a new element into a sorted list by value
	int isSorted();
	void Rearrange();				// sort negatives on the left & positives on the right
	Array* Merge(Array arr2);
	Array* Union(Array arr2);		// if duplicates copy only one element
	Array* Difference(Array arr2);		// if duplicates copy only one element
	Array* Intersection(Array arr2);  // copy only common elements

};

void Array::Display()						// function to display the array's elements
{
	int i;
	cout << "Elements are";
	for (i = 0; i < length; i++)
		cout <<" " << A[i];
	cout << endl;
}

void Array::Append(int x) {				// function to add an element to the end of the array
	if (length < size)
		A[length++] = x;
}

void Array::Insert(int index, int x)   // function to insert an element at a given index
{
	int i;

	if (index >= 0 && index <= length)       // checks for valid index and array length
	{
		for (i = length; i > index; i--)
			A[i] = A[i - 1];
		A[index] = x;
		length++;
	}
}


int Array::Delete(int index)		// defining an array pointer and given index parameter
{
	int x = 0;
	int i;										// created to shift values

	if (index >= 0 && index < length)      // checking the index length
	{
		x = A[index];						  // x becomes the value from a given index
		for (i = index; i < length - 1; i++) // starting at index, i should be less than the length -1                                               because of the shift
			A[i] = A[i + 1];			 // copy an element from A of index plus 1
		length--;							 // after shifting all the elements make the array smaller
		return x;
	}

	return 0;
}

void swap(int* x, int* y)							// swap function using pointers
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int Array::LinearSearch(int key)
{
	int i;
	for (i = 0; i < length; i++)
	{
		if (key == A[i])
		{
			swap(&A[i], &A[0]);
			return i;
		}
	}
	return -1;
}

int Array::BinarySearch(int key) {				// Binary search function

	int l, mid, h;										// defining low mid and high
	l = 0;
	h = length - 1;

	while (l <= h)										// only run the loop while low is <= high
	{
		mid = (l + h) / 2;								// mid is low plus high divided by 2
		if (key == A[mid])
			return mid;
		else if (key < A[mid])
			h = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}


int Array::Get(int index) {				// get an element at a given index

	if (index >= 0 && index < length)
		return	A[index];
	return -1;
}

void Array::Set(int index, int x) {		// set an element at a given index

	if (index >= 0 && index < length)
		A[index] = x;
}

int Array::Max() {							// find the maximum element value in the array

	int max = A[0];
	int i;
	for (i = 1; i < length; i++)
	{
		if (A[i] > max)
			max = A[i];
	}
	return max;
}

int Array::Min() {						// find the minimum element value in the array

	int min = A[0];
	int i;
	for (i = 1; i < length; i++)
	{
		if (A[i] < min)
			min = A[i];
	}
	return min;
}

int Array::Sum() {						// return the sum of all elements in the array

	int total = 0;
	int i;

	for (i = 0; i < length; i++)
	{
		total = total + A[i];
	}
	return total;
}

float Array::Avg() {						// return the average of all elements in the array

	return (float)Sum() / length;
}

void Array::Reverse() {
	int* B;
	int i, j;

	B = new int(length);						// creating second array in Heap

	for (i = length - 1, j = 0; i >= 0; i--, j++)		// i starts at array end and j starts at [0]
	{
		B[j] = A[i];								// copy elements from A to B in reverse
	}
	for (i = 0; i < length; i++)
	{
		A[i] = B[i];								// copy all elements from B to A
	}

}

void Array::Reverse2()						// reverse array with Swap() function
{
	int i, j;
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		swap(&A[i], &A[j]);
	}
}

void Array::InsertSort(int x) {				// insert a new element into a sorted list by value

	int i = length - 1;

	if (length == size)
		return;

	while (i >= 0 && A[i] > x) {					// checks index value is above 0 and greater		                                                  than the number being inserted
		A[i + 1] = A[i];					// shifts the checked number to the right 1 position
		i--;
	}
	A[i + 1] = x;								// insert new element
	length++;									// increase array length
}

int Array::isSorted() {
	int i;

	for (i = 0; i < length - 1; i++)
	{
		if (A[i] > A[i + 1])				// checks if already sorted
			return 0;								// 0 is false
	}
	return 1;										// 1 is true
}

void Array::Rearrange() {					// sort negatives on the left & positives on the right

	int i = 0;										// start at [0]
	int j = length - 1;						// start at array end

	while (i < j)
	{
		while (A[i] < 0)						// i increments until it reaches a positive
			i++;

		while (A[j] >= 0)						// j decrements until it reaches a negative
			j--;

		if (i < j)									// negatives on left, positives on right
			swap(&A[i], &A[j]);				// swap negative with positive
	}
}

Array* Array::Merge(Array arr2)
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	Array* arr3 = new Array(length+arr2.length);						// creating third array in Heap

	while (i < length && j < arr2.length)
	{
		if (A[i] < A[j])					// checks for smaller value in arr1/arr2
			arr3->A[k++] = A[i++];				// moves that value to third array
		else
			arr3->A[k++] = arr2.A[j++];				// otherwise move arr2 to arr 3 element
	}
	for (; i < length; i++)						// keep checking length of arr1
		arr3->A[k++] = A[i];						// move remaining arr1 elements to arr3
	for (; j < arr2.length; j++)
		arr3->A[k++] = arr2.A[j];						// move remaining arr2 elements to arr3
	arr3->length = length + arr2.length;			// arr3 length is arr1 + arr 2
	arr3->size = size + arr2.size;

	return arr3;
}

Array* Array::Union(Array arr2)		// if duplicates copy only one element
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	Array* arr3 = new Array;						// creating third array in Heap

	while (i < length && j < arr2.length)
	{
		if (A[i] < arr2.A[j])					// checks for smaller value in arr1/arr2
			arr3->A[k++] = A[i++];				// moves that value to third array
		else if (arr2.A[j] < A[i])				// if arr2 is smaller than arr1
			arr3->A[k++] = arr2.A[j++];				// move arr2 element to arr3
		else
		{
			arr3->A[k++] = A[i++];					// if equal copy arr1 element to arr3
			j++;
		}
	}
	for (; i < length; i++)						// keep checking length of arr1
		arr3->A[k++] = A[i];						// move remaining arr1 elements to arr3
	for (; j < arr2.length; j++)
		arr3->A[k++] = arr2.A[j];						// move remaining arr2 elements to arr3
	arr3->length = k;								    // arr3 length is k
	arr3->size = size + arr2.size;

	return arr3;
}

Array* Array::Intersection(Array arr2)  // copy only common elements
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	Array* arr3 = new Array;						// creating third array in Heap

	while (i < length && j < arr2.length)
	{
		if (A[i] < arr2.A[j])					// checks for smaller value in arr1/arr2
			i++;
		else if (arr2.A[j] < A[i])				// if arr2 is smaller than arr1
			j++;
		else
		{
			arr3->A[k++] = A[i++];					// if equal copy arr1 element to arr3
			j++;
		}
	}
	arr3->length = k;								    // arr3 length is k
	arr3->size = size + arr2.size;

	return arr3;
}

Array* Array::Difference(Array arr2)		// if duplicates copy only one element
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	Array* arr3 = new Array;						// creating third array in Heap

	while (i < length && j < arr2.length)
	{
		if (A[i] < arr2.A[j])					// checks for smaller value in arr1/arr2
			arr3->A[k++] = A[i++];				// moves that value to third array
		else if (arr2.A[j] < A[i])				// if arr2 is smaller than arr1 incrememnt j
			j++;
		else                                            // if they're both equal, increment i/j
		{
			i++;
			j++;
		}
	}
	for (; i < length; i++)						// keep checking length of arr1
		arr3->A[k++] = A[i];						// move remaining arr1 elements to arr3

	arr3->length = k;								    // arr3 length is k
	arr3->size = size + arr2.size;

	return arr3;
}

int main() 

{
	Array *arr1;
	int ch,sz;
	int x, index;


	cout << "What is the size of the array? " << endl;
	scanf_s("%d",&sz);
	arr1 = new Array(sz);


	do {

	cout << "Menu" << endl;
	cout << "1. Insert" << endl;
	cout << "2. Delete" << endl;
	cout << "3. Search" << endl;
	cout << "4. Sum" << endl;
	cout << "5. Display" << endl;
	cout << "6. Exit" << endl;


	cout << "Enter your choice " << endl;
	cin >> ch;

	switch (ch)
	{
	case 1: cout << "Enter an element and index " << endl;
		cin >> x >> index;
		arr1->Insert(index, x);
		break;

	case 2: cout << "Enter index " << endl;
		cin >> index;
		x = arr1->Delete(index);
		break;

	case 3: cout << "Enter element to search " << endl;
		cin >> x;
		index = arr1->LinearSearch(x);
		cout << "Element index is " << index << endl;
		break;

	case 4: cout << "Sum is " << arr1->Sum() << endl;
		break;

	case 5: arr1->Display();

	}
} while (ch < 6);
	return 0;

}