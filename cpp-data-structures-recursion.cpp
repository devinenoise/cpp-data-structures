#include<iostream>
using namespace std;

void fun(int n) {

	if (n > 0)					// tail recursion that will print 3 2 1
	{
		cout << n << endl;
		fun(n - 1);				// processes at call phase
	}
}


void fun2(int n) {

	if (n > 0)					// head recursion that will print 1 2 3
	{
		fun2(n - 1);
		cout << n << endl;		// processes at return phase
	}
}

int fun3(int n) {							// using a static variable
	static int x = 0;						
	if (n > 0) {
		x++;
		return fun3(n - 1) + x;				// x is added to n on the return phase
	}
	return 0;
}


int main()
{
	int x = 3, y = 3;
	fun(x);
	fun2(y);
	
	
	
	int r;
	r = fun3(5);							// r is 5 and x increments to the value of r
	cout << r << endl;						// output 25 (r^2)


	return 0;

}