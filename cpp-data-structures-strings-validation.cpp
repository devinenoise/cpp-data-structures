#include <iostream>

using namespace std;



int validateString(char *string) 
{

	int i;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (!((string[i] >= 65 && string[i] <= 90) ||			// if NOT 'a' to 'z' OR
			(string[i] >= 97 && string[i] <= 122) ||			// if NOT 'A' to 'Z' OR
			(string[i] >= 48 && string[i] <= 57)))				// if NOT 0 to 9
			return 0;										// false - invalid
	}
			return 1;										// true - valid
}
			

int main() {

	char password[] = "1bnN23";

	validateString(password);

	if (validateString(password))
	{
		cout << "valid password" << endl;
	}
	else
		cout << "invalid password" << endl;




	return 0;
}