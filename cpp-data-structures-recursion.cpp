#include<iostream>
using namespace std;

void fun(int n) {

	if (n > 0)					// tail recursion that will print 3 2 1
	{
		cout << n << endl;
		fun(n - 1);
	}
}


void fun2(int n) {

	if (n > 0)					// head recursion that will print 1 2 3
	{
		fun2(n - 1);
		cout << n << endl;
	}
}

int main()
{
	int x = 3, y = 3;
	

	fun(x);

	fun2(y);

	return 0;

}