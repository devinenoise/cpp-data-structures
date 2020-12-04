#include<iostream>
using namespace std;


	
// call by address formal parameters and body
void swap (int *x, int *y){
	
	int temp;
	temp = *x;
	*x = *y; 
	*y = temp;
	
}

// call by reference formal parameters and body and function will run inline
void swap2(int &x, int &y) {

	int temp;
	temp = x;
	x = y;
	y = temp;

}

// call by value formal parameters will not change actual parameters
void swap3(int x, int y) {

	int temp;
	temp = x;
	x = y;
	y = temp;

}



int main()
{


	int num1 = 10, num2 = 15;
	

	swap(&num1, &num2); // address

	cout << "First Number " << num1 << endl;
	cout << "Second Number " << num2 << endl;

	swap2(num1, num2); // reference

	cout << "First Number " << num1 << endl;
	cout << "Second Number " << num2 << endl;

	swap3(num1, num2); //  value -- doesn't swap

	cout << "First Number " << num1 << endl;
	cout << "Second Number " << num2 << endl; 


	return 0;
}