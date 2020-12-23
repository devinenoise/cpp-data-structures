#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;


int main() {

	int* p = new int[5];					// declaring a pointer to access memory in Heap
	p[0] = 2;
	p[1] = 4;
	p[2] = 6;
	p[3] = 8;
	p[4] = 10;



	int* q = new int[10];
	q[5] = 100;

	int i;
	for (i = 0; i < 5; i++) {
		q[i] = p[i];
	}

	delete []p;							// delete from memory to avoid mem leak
	p = q;								// p is now size [10] like q and the same address
	q = NULL;							// q is not pointing 

	for (i = 0; i < 5; i++) {
		cout << p[i] << endl;
	}


}