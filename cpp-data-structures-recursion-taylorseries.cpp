#include<iostream>
using namespace std;

double e(int x, int n) {						     // recursive function to perform Taylor Series
	static double p = 1;
	static double f = 1;
	double r;

	if (n == 0) 
		return 1;
	else
		r = e(x, n - 1);
	p = p * x;
	f = f * n;
	return r + p / f;
}


double eLoop1(double x, double n) {					// using recursion to perform Taylor Series Horner's Rule
	static double s = 1;
	if (n == 0)
		return s;
	else
		s = 1+x*s/n;
	return e(x,n-1);
}


double eLoop(double x, double n) {					// using a for loop to perform Taylor Series 
	double s = 1;
	int i;
	double num = 1;
	double denom = 1;
	for (i=1; i<=n; i++) {
		num *= x;
		denom *= i;
		s += num / denom;
				
	}
	return s;
}

int main()
{

	cout << eLoop1(1, 10) << endl;


	return 0;

}