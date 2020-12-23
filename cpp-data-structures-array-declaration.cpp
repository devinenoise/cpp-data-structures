#include <iostream>
using namespace std;


int A[5];								// declaration

int B[5] = { 2, 4, 6, 8, 10 };			// initialization

int C[5] = { 2, 4 };					// initialized as 2,4,0,0,0 

int D[] = { 2, 4, 6, 8, 10, 12 };		// initalized with 6 spaces

int E[5] = { 0 };  						// initialized as 0,0,0,0,0 





int main() {

	int i;
	for (i = 0; i < 5; i++)
	{
		cout << B[i] << endl;
	}


	cout << 3[D] << endl;				// print the 3rd element of D array

	cout << *(B + 2) << endl;			// use a pointer to access the 2nd element in B array


}