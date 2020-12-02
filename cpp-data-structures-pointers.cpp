#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	int a = 10;
	int *p;  // address variable
	p = &a;  // pointer initialization

	cout << a <<endl;
	cout << "Using pointer " << *p;  //dereferencing
	

	return 0;
}