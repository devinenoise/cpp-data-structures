#include<iostream>

using namespace std;

// 3 ways to create 2 dimensional arrays (accessing Stack and Heap)


int main() {

	int A[3][4] = { {1,2,3,4},{2,4,6,8},{1,3,5,7} };	// 2D array with 3 rows and 4 columns created in Stack

	int i, j;

	for (i = 0; i < 3; i++)								// nested for loop to print all values in 2d array A
	{
		for (j = 0; j < 4; j++)
			cout << " " << A[i][j];
		cout << endl;
	}


	int* B[3];   			    // an array of integer pointers 
	B[0] = new int[4];			// creates an array length of 4 inside B[0] in Heap
	B[1] = new int[4];			// creates an array length of 4 inside B[1] in Heap
	B[2] = new int[4];			// creates an array length of 4 inside B[2] in Heap



	int** C;					// double pointer that points to an array of pointers
	C = new int*[3];			// an array of integer pointers
	C[0] = new int[4];			// creates an array length of 4 inside C[0] in Heap
	C[1] = new int[4];          // creates an array length of 4 inside C[1] in Heap
	C[2] = new int[4];          // creates an array length of 4 inside C[2] in Heap
	


	return 0;

}