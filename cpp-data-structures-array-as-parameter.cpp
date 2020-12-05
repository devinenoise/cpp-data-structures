#include<iostream>
using namespace std;


void fun(int A[], int n)  // array pointer as parameter

{
	int i;
	for (i = 0; i < n; i++)
		cout << A[i] << endl;
}

int * funArray(int size)  // return an array's size

{   
	int *p;
	p = new int[size];

	for (int i = 0; i < size; i++)
		p[i] = i + 1;

	return p;

}

int main()
{
	// display the values in the array 
	int A[5] = { 2,4,6,8,10 };
	fun(A,5);

	
	
	// display the size of the array
	int *ptr, sz = 12;
	ptr = funArray(sz);

	for (int i = 0; i < sz; i++)
		cout << ptr[i] << endl;
	
		
	return 0;
	

}