#include <iostream>


using namespace std;


int Anagram(char* string1, char* string2)
{
	int i;
	int H[26] = { 0 };

	for (i = 0; string1[i] != '\0'; i++)
	{
		H[string1[i] - 97] += 1;												// add to the hashtable for each letter
	}
	
	for (i = 0; string2[i] != '\0'; i++)
	{
		H[string2[i] - 97] -= 1;												// subtract from the hashtable for each matching letter

		if (H[string2[i] - 97] < 0)												// if there letters in string 2 that don't match string 1
		{
			cout << "They are not anagrams" << endl;
			break;
		}
	}
		if (string2[i] == '\0') 
		{
			cout << "The two words are anagrams" << endl;
			return 0;
		}
		
}



int main() {

	char A[] = "verbose";
	char B[] = "observe";

	Anagram(A, B);


	return 0;
}