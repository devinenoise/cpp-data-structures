#include<iostream>
using namespace std;

int sum(int n) {					// recursive function to find the sum of natural number N
	if (n == 0)
		return 0;
	else
		return sum(n - 1) + n;
}

int sum2(int n) {					// fastest method using formula to find sum -- 0(1) time taken
	return n * (n + 1) / 2;			
}

int sum3(int n) {					// for loop to find the sum -- 0(n) time taken
	int i, int s = 0;
	for (i = 1; i <= n; i++)
		s = s + i;
	return s;
}

int main()
{

	return 0;

}