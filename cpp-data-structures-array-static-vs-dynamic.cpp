#include<iostream>
#include<stdio.h>

using namespace std;



int main() {

	int A[5] = { 2, 4 ,6, 8, 10 };		   // array created in Stack

	int *p;								   // declare pointer variable
	p = new int[5];						   // array created in Heap
	
	p[0] = 3;
	p[1] = 5;
	p[2] = 7;
	p[3] = 9;
	p[4] = 11;										


	int i;

	for (i = 0; i < 5; i++){
		cout << A[i] << endl;
		
	}for (i = 0; i < 5; i++){
		
		cout << p[i] << endl;
	}



}