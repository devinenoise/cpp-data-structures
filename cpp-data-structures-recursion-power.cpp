#include<iostream>
using namespace std;

int power(int m, int n) {							// using recursion to find the power of N
	if (n == 0)
		return 1;
	else
		return power(m, n-1) * m;
}

int power1(int m, int n) {						// using recursion to find the power of n with less multiplication
	if (n == 0)
		return 1;
	if (n % 2 == 0)								//  if n can be divided evenly
		return power1(m * m, n / 2);
	else
		return m * power1(m * m, (n - 1) / 2);		// if n is an odd number, subtract 1 from n then divide by 2
}



int Ipower(int base, int exp) {					// using iteration for loop to find the power of N
	int i;
	int num=1;									// i = iteration count, exp = exponent
	for (i = 1; i <= exp; i++)
		num = num * base;
	return num;
}

int main()
{

	int r;
	r = Ipower(2, 9);
	cout << r << endl;


	return 0;

}