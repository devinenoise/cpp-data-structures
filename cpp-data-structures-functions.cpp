#include<iostream>
using namespace std;

int add(int a, int b) //protype or signature of function (int a and int b are formal parameters)
{					  // destination or body of the function
	int c;			  
	c = a + b;
	return(c);
}


int main()
{
	int x = 10,	y = 5, z;
	
	z = add(x, y);  // actual parameters
	
	cout << "Sum is "<< z << endl;

	
	return 0;
}