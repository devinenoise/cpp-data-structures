#include<iostream>
using namespace std;

int fact(int n) {						// factorial function
	if (n == 0)
		return 1;
	else
		return fact(n - 1) * n;
}

int nCr(int n, int r) {					// find ncr with the factorial function
	
	
	int num, den;
	num = fact(n);
	den = fact(r) * fact(n - r);
	

	return num / den;
}

int rNCR(int n, int r) {				// recursive function to find ncr
	
	if (n == r || r == 0)
		return 1;
	else
		return rNCR(n - 1, r - 1) + rNCR(n - 1, r);
	
	}

int main()
{
	
	cout << rNCR(4, 2) << endl;

	return 0;

}