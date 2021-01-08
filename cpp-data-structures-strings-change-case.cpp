#include <iostream>

using namespace std;



int Lowercase(char string[])
{
	int i;
	for (i = 0; string[i] != '\0' ; i++)					
	{
		string[i] += 32;
	}
		cout << string << endl;
	return 0;
}
int Uppercase(char string[])
{
	int i;
	for (i = 0; string[i] != '\0' ; i++)					
	{
		string[i] -= 32;
	}
		cout << string << endl;
	return 0;
}

int Switchcase(char string[])
{
	int i;
	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 65 && string[i] <= 90)
		{
			string[i] += 32;							// make lowercase
		}
		else if (string[i] >= 97 && string[i] <= 122)
		{
			string[i] + -32;							// make uppercase
		}
		cout << string << endl;
		return 0;
	}
}



int main() {

	char message[] = "WELCOME";
	Lowercase(message);
	
			
	char message2[] = "weLcOme";
	Switchcase(message2);
	
	char message3[] = "welcome";
	Uppercase(message3);


	return 0;
}