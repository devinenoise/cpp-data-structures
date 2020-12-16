#include<iostream>
using namespace std;

int sum(int n) {					// Recursive function to find the sum of natural number N
	if (n == 0)						// time and space taken is 0(n)
		return 0;
	else
		return sum(n - 1) + n;
}

int sum2(int n) {					// fastest method using formula to find sum -- 
	return n * (n + 1) / 2;			// 0(1)	time taken
	}

int Isum(int n) {					// Iterative method is for loop to find the sum -- 0(n) time taken
	int i, s = 0;					// i = iteration count, s = sum
	for (i = 1; i <= n; i++)
		s = s + i;
	return s;
}

int main()
{

	int r;
	r = Isum(5);
	cout << r << endl;

	return 0;

}