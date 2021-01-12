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

char Palindrome(char* string)
{
	int i, j, t = 0;
	
	for (i = 0; string[i] != '\0'; i++)
	{
	}
	j = i - 1;

	while (t <= j)
	{

		if (string[t] != string[j]) {

			cout << string << " is not a palindrome" << endl;
			return 0;
		}

		else
		{
			t++;
			j--;
		}
		cout << string<< " is a palindrome" << endl;
		return 0;
	}
}


int main() {

	char A[] = "painting";
	char B[] = "Painting";

	CompareStrings(A, B);


	char C[]= "madams";
	char D[]= "racecar";

	Palindrome(C);
	Palindrome(D);

	return 0;
}