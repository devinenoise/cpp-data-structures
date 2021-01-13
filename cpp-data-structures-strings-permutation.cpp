#include <iostream>

using namespace std;


void permutation(char* string, int k) {
	static int A[10] = { 0 };
	static char result[10];
	int i;

	
	if (string[k] == '\0') 
	{
		
		result[k] == '\0';
		cout << result << endl;
	}
	else
	{
		for (i = 0; string[i] != '\0'; i++)
		{
			if (A[i] == 0)
			{
				result[k] = string[i];
				A[i] = 1;
				permutation(string, k + 1);
				A[i] = 0;
			}
		}
	}
}






int main() {

	char s[] = "ABC";

	permutation(s, 0);



	return 0;
}