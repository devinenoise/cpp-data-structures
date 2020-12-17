#include<iostream>
using namespace std;

int rfib(int n) {			// recursive function to find the Fibonnaci sequence of a n
	if (n <= 1)return n;
	else
		return rfib(n - 2) + rfib(n - 1);
}

int F[10];					//  global array for memoization function set to a length of 10

int mfib(int n)				// Fibonacci using Memoization (tabling)
{
	if (n <= 1)
	{
		F[n] = n;
		return n;
	}
	else
	{
		if (F[n - 2] == -1)
			F[n - 2] = mfib(n - 2);
		if (F[n - 1] == -1)
			F[n - 1] = mfib(n - 1);
		F[n] = F[n - 2] + F[n - 1];
		return F[n - 2] + F[n - 1];
	}
}

int fib(int n){				// iterative for loop to find fibonnaci of n
	int t0=0, t1=1, s=0, i;		// s for sum
	if (n <= 1) 
	return n;
	for (i = 2; i <= n; i++) {
		s = t0 + t1;
		t0 = t1;
		t1 = s;
	}
	return s;
}

int main()
{
	int i;						
	for (i = 0; i < 10; i++)
		F[i] = -1;					// initialize the F array with -1 because it is not a Fibonnoci number

	int n = 7;
	cout << "fib(" << n << ") = " << rfib(n) << endl;



	return 0;

}