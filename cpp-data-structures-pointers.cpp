#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int a = 10;
	int *p;  // address variable declaration
	p = &a;  // pointer variable initialization

	cout << a <<endl;
	cout << "Using pointer " << *p<<endl;  //dereferencing
	
	int A[5] = { 2,4,6,8,10 };
	int *z;
	z = A;  // p = &A[0] is same as p = A;
			// the address is already the first element in the array, so "&" unnecessary

	for (int i = 0; i < 5; i++) {

		cout << z[i] << endl;  // pointer works to access array without *
	};


	int* b;
	b = new int[5];

	b[0] = 11; b[1] = 12; b[2] = 13; b[3] = 14; b[4] = 15;

	for (int i = 0; i < 5; i++) {

		cout << b[i] << endl;  // pointer works to access array without *
	};

	delete[] b;  // deallocating memory from Heap



	int* p1;
	char* p2;
	float* p3;
	double* p4;
	struct Rectangle* p5;

	cout << sizeof(p1) << endl; // 8 bytes
	cout << sizeof(p2) << endl; // 8 bytes
	cout << sizeof(p3) << endl; // 8 bytes
	cout << sizeof(p4) << endl; // 8 bytes
	cout << sizeof(p5) << endl; // 8 bytes





	return 0;
}