#include<iostream>
using namespace std;

// Tower of Hanoi Problem
// There are three towers (A,B,C) and one of the towers has some numbers of discs of different sizes.  The problem is to transfer all the disks from tower A to tower C, one disk at a time and a larger disk can not sit on top of any smaller disk.

void TOH(int n, int A, int B, int C) {              // n is number of disks
	if (n > 0)
	{
		TOH(n - 1, A, C, B);
		cout << "A disk was moved from " << A << " to "<< C << endl;
		TOH(n - 1, B, A, C);
	}
 }


int main() {

	TOH(3, 1, 2, 3);

	return 0;
}