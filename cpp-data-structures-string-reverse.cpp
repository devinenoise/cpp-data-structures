#include <iostream>

using namespace std;


void ReverseString(char *string) {
	int i,j;
	char t;
	for (j = 0; string[j] != '\0'; j++)                       // j is at the last position
	{
	}
	j = j - 1;												 // to start one less from \0 in the string
	for (i = 0; i < j; i++, j--)							 // i is at first position
	{
		t = string[i];										// t is a placeholder for the swap
		string[i] = string[j];
		string[j] = t;
	}
	cout << string << endl;
}



int main() {


	char A[] = "python";
	
	ReverseString(A);										// outputs "nohtyp"

	return 0;
}