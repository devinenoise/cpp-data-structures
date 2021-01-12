#include <iostream>

using namespace std;


void CompareStrings(char* string1, char *string2) {
	int i;
	for (i = 0; string1[i] != '\0' && string2[i] != '\0'; i++)
	{
		if (string1[i] != string2[i]) {
			break;

		}
	}
	
	if (string1[i] == string2[i] || string1[i] - string2[i] == 32 || string2[i] - string1[i] == 32)      // disregards case matching
	{

	cout << "Strings match" << endl;
	}
	else if (string1[i] < string2[i]) {
		cout << "The first string " << string1 << " is smaller than " << string2 << endl;
	} 
	else 
		cout << "The first string " << string1 << " is larger than " << string2 << endl;
	
}



int main() {

	char A[] = "painting";
	char B[] = "Painting";

	CompareStrings(A, B);



	return 0;
}