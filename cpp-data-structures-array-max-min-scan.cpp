#include <iostream>

using namespace std;

struct Array {
	int A[15];
	int length = 0;
	int size;

};

int MinMax(Array arr) {
	int i;
	int max = arr.A[0];
	int min = arr.A[0];

	for (i = 1; i < arr.length; i++)
	{
		if (arr.A[i] < min)
			min = arr.A[i];
		else if (arr.A[i] > max)
			max = arr.A[i];
	}

	cout << "Your min is " << min << " and your max is " << max << endl;
	return 0;

}



int main() {

	Array arr1 = { {8, 1, -3, 4, 6, 9, 8, 11, 12, 13, 15, 17}, 12 };

	MinMax(arr1);


	return 0;
}