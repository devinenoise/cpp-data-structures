#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int A[10] = { 2,4,6,8,10 };


	for (int x : A)
	{
		cout << x << endl;
	}

	// integers take up 4 bytes
	cout << sizeof(A) << endl;

	cout << A[8] << endl;

	printf("%d\n", A[9]);
	return 0;
}