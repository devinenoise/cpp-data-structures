#include <iostream>

using namespace std;



int Duplicates(char* string) {												//find and store lowercase duplicates in a hash table
	int i;
	int H[26] = { 0 };

	for (i = 0; string[i] != '\0'; i++)
	{
		H[string[i] - 97] += 1;												// subtract 97 to make hash table smaller
	}

	for (i = 0; i < 26; i++)
	{
		if (H[i] > 1)
		{
			cout << "The letter " << char(i + 97) << " was found " << H[i] << " times" << endl;				// char() outputs ASCII to char
		}
	}
	return 0;
}




int main() {


	char A[] = "finding";

	Duplicates(A);




	return 0;
}