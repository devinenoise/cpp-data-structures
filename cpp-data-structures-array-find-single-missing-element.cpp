#include <iostream>

using namespace std;



struct Array {
	int A[15];
	int length;
	int size;
};


int MissingElement(Array arr) {
	int diff, i;
	diff = arr.A[0] - 0;
	
	for (i = 0; i < arr.length; i++) 
	{
		
		if (arr.A[i] - i != diff)
		{
			while (diff < arr.A[i] - i) {
				cout << "The missing element(s) are " << i + diff << endl;
				diff++;
			}
		}
	}

return 0;
}




int main() {
	
	Array arr1 = {{1, 2, 3, 4, 6, 7, 8, 9, 11, 12, 15, 17}, 12 };
	
	MissingElement(arr1);

	return 0;
}