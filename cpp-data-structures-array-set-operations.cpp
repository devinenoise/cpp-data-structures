#include <iostream>

using namespace std;

// append, concat, compare, copy, merge


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


struct Array* Merge(struct Array* arr1, struct Array* arr2)
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	struct Array* arr3 = new Array;						// creating third array in Heap

	while (i < arr1->length && j < arr2->length)
	{
		if (arr1->A[i] < arr2->A[j])					// checks for smaller value in arr1/arr2
			arr3->A[k++] = arr1->A[i++];				// moves that value to third array
		else
			arr3->A[k++] = arr2->A[j++];				// otherwise move arr2 to arr 3 element
	}
	for (; i < arr1->length; i++)						// keep checking length of arr1
		arr3->A[k++] = arr1->A[i];						// move remaining arr1 elements to arr3
	for (; j < arr2->length; j++)
		arr3->A[k++] = arr2->A[j];						// move remaining arr2 elements to arr3
	arr3->length = arr1->length + arr2->length;			// arr3 length is arr1 + arr 2
	arr3->size = arr1->size + arr2->size;

	return arr3;
}

struct Array* Union(struct Array* arr1, struct Array* arr2)		// if duplicates copy only one element
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	struct Array* arr3 = new Array;						// creating third array in Heap

	while (i < arr1->length && j < arr2->length)
	{
		if (arr1->A[i] < arr2->A[j])					// checks for smaller value in arr1/arr2
			arr3->A[k++] = arr1->A[i++];				// moves that value to third array
		else if (arr2->A[j] < arr1->A[i])				// if arr2 is smaller than arr1
			arr3->A[k++] = arr2->A[j++];				// move arr2 element to arr3
		else
		{
		arr3->A[k++] = arr1->A[i++];					// if equal copy arr1 element to arr3
		j++;
		}
	}
	for (; i < arr1->length; i++)						// keep checking length of arr1
		arr3->A[k++] = arr1->A[i];						// move remaining arr1 elements to arr3
	for (; j < arr2->length; j++)
		arr3->A[k++] = arr2->A[j];						// move remaining arr2 elements to arr3
	arr3->length = k;								    // arr3 length is k
	arr3->size = arr1->size + arr2->size;

	return arr3;
}

struct Array* Intersection(struct Array* arr1, struct Array* arr2)  // copy only common elements
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	struct Array* arr3 = new Array;						// creating third array in Heap

	while (i < arr1->length && j < arr2->length)
	{
		if (arr1->A[i] < arr2->A[j])					// checks for smaller value in arr1/arr2
			i++;										
		else if (arr2->A[j] < arr1->A[i])				// if arr2 is smaller than arr1
			j++;										
		else
		{
			arr3->A[k++] = arr1->A[i++];					// if equal copy arr1 element to arr3
			j++;
		}
	}
	arr3->length = k;								    // arr3 length is k
	arr3->size = arr1->size + arr2->size;

	return arr3;
}

struct Array* Difference(struct Array* arr1, struct Array* arr2)		// if duplicates copy only one element
{
	int i, j, k;										// arr1 uses i, arr2 uses j, arr3 uses k
	i = j = k = 0;
	struct Array* arr3 = new Array;						// creating third array in Heap

	while (i < arr1->length && j < arr2->length)
	{
		if (arr1->A[i] < arr2->A[j])					// checks for smaller value in arr1/arr2
			arr3->A[k++] = arr1->A[i++];				// moves that value to third array
		else if (arr2->A[j] < arr1->A[i])				// if arr2 is smaller than arr1 incrememnt j
			j++;	     
		else                                            // if they're both equal, increment i/j
		{
			i++;
			j++;
		}
	}
	for (; i < arr1->length; i++)						// keep checking length of arr1
		arr3->A[k++] = arr1->A[i];						// move remaining arr1 elements to arr3
	
	arr3->length = k;								    // arr3 length is k
	arr3->size = arr1->size + arr2->size;

	return arr3;
}

int main() {


	struct Array arr1 = { {2,6,10,15,25},10,5 };
	struct Array arr2 = { {3,6,8,15,22},10,5 };
	struct Array* arr3;										// used to make an empty array from Merge

	arr3 = Merge(&arr1, &arr2);							// assigning arr3 - combining
	arr3 = Union(&arr1, &arr2);							// copy duplicate elements only once
	arr3 = Intersection(&arr1, &arr2);					// only copy the duplicate elements
	arr3 = Difference(&arr1, &arr2);					// only copy the difference in elements from arr1

	Display(*arr3);											// Display takes call by value so use *

	return 0;

}