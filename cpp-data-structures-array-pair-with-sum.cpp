#include <iostream>

using namespace std;

struct Array {
	int A[15];
	int length = 0;
	int size;

};

int PairSum(Array arr, int sum) {
	int i, j;
	
	cout << "Searching the array for your sum.... " << endl;

	for (i = 0; i < arr.length - 1; i++) {


		for (j = i + 1; j < arr.length; j++)
		{
			if (arr.A[i] + arr.A[j] == sum)
				cout << arr.A[i] << " + " << arr.A[j] << " = " << sum << endl;
		}
	}
	
	return 0;
}

int HashPairSum(Array arr, int sum) {
	int i;
	int h[20];													// hash table
	
	cout << "Searching the array for your sum using a Hash Table.... " << endl;

	for (i = 0; i < arr.length - 1; i++) {
		h[i] = 0;
		if (h[sum-arr.A[i]] != 0 && sum-arr.A[i] > 0){
				cout << arr.A[i] << " + " << sum-arr.A[i] << " = " << sum << endl;
		}
	h[arr.A[i]]++;
	}
	
	return 0;
}

int SortedSum(Array arr, int sum) {
	int i = 0;
	int j = arr.length - 1;

	cout << "Searching the array for your sum.... " << endl;

	while (i < j)
	{
		if (arr.A[i] + arr.A[j] == sum)
		{
			cout << arr.A[i] << " + " << arr.A[j] << " = " << sum << endl;
			i++;
			j--;
		}
		else if (arr.A[i] + arr.A[j] < sum)
			i++;
		else
			j--;
	}
	return 0;
}




int main() {

	Array arr1 = { {8, 1, 3, 4, 6, 9, 8, 11, 12, 13, 15, 17}, 12 };

	PairSum(arr1, 7);

	HashPairSum(arr1, 4);

	SortedSum(arr1, 23);

	return 0;
}