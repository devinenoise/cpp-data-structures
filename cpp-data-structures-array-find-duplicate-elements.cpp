#include <iostream>

using namespace std;



struct Array {
	int A[15];
	int length;
	int size;
};


int FindDuplicate(Array arr) {
	int i, j;
	cout << "There are some duplicates.. " << endl;


	for (i = 0; i < arr.length - 1; i++)
	{
		int count = 1;

		for (j = i + 1; j < arr.length; j++)
		{
			if (arr.A[i] == arr.A[j] && arr.A[i] != -1){
				count++;
			arr.A[j] = -1;
		}
		}
		if (count > 1) 
		{
			
			cout << arr.A[i] << " is present " << count << " times" << endl;
		}
		}
		return 0;
}



int main() {

	Array arr1 = { {5, 2, 2, 4, 6, 9, 8, 11, 11, 13, 15, 17}, 12 };

	FindDuplicate(arr1);

	return 0;
}