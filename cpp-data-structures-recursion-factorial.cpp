#include<iostream>
using namespace std;

int fact(int n) {						// using recursion to find the factorial of N
	if (n == 0)
		return 1;
	else
		return fact(n - 1) * n;
}

int Ifact(int n) {						// using iteration for loop to find the factorial of N
	int i, f = 1;					    // i = iteration count, f = factor
	for (i = 1; i <= n; i++)
		f = f * i;
	return f;
}									

int main()
{

	int r;
	r = Ifact(5);
	cout << r << endl;


	return 0;

}