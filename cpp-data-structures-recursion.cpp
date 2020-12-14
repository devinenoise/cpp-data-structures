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

void fun4(int n) {							// tree recursion
	if (n > 0) {
		cout << n << endl;
		fun4(n - 1);
		fun4(n - 1);

	}
}

void funB(int n);							// funB must be defined before using in funA
void funA(int n) {							// indirect recursion
	if (n > 0) {
		cout << n << endl;
		funB(n - 1);
		
	}
}

void funB(int n) {							// indirect recursion
	if (n > 1) {
		cout << n << endl;
		funA(n/2);

	}
}

int fun5(int n) {							// nested recursion
	if (n > 100) 
		return n - 10;
		return fun5(fun5(n + 11));			// recursive function used as a parameter
		
}

int main()
{
	int x = 3, y = 3;
	//tail recursion
	fun(x);

	//head recursion
	fun2(y);
	
	
	// static variable
	int r;
	r = fun3(5);							// r is 5 and x increments to the value of r
	cout << r << endl;						// output 25 (r^2)

	// tree recursion
	fun4(3);								// output is 3 2 1 1 2 1 1 (15 activation records)

	// indirect recursion
	funA(20);								// output is 20 19 9 8 4 3 1
	
	
	// nested recursion
	int s;
	s = fun5(95);
	cout << s << endl;						// output is 91
	
	
	return 0;

}