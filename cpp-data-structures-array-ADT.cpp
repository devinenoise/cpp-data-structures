#include <iostream>
#include<stdlib.h>

using namespace std;



struct Array
{
	int* A;
	int size;
	int length = 0;

};

void Display(struct Array arr)						// function to display the array's elements
{
	int i;
	cout << "Elements are " << endl;
	for (i = 0; i < arr.length; i++)
		cout << " " << arr.A[i];
}
int main()
{
	struct Array arr;
	int n,i;


	cout << "Enter size of the array " << endl;
	
	cin >> arr.size;
	arr.A = new int[arr.size];								// creating an array in Heap
	

	cout << "Enter number of numbers you want to put in the array  " << endl;
	cin >> n;												// setting the number of elements

	cout << "Enter each element one at a time  " << endl;
	
	for (i = 0; i < n; i++)
		cin >> arr.A[i];
	    arr.length = n;
	
	Display(arr);											// function call to display elements

	return 0;
}