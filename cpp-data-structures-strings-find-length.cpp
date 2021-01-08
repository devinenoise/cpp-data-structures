#include <iostream>

using namespace std;


char c = 'A';								            	// character
char cArray[5] = { 'A', 'B', 'C', 'D', 'E' };			   // array of characters
char alphaString[] = { 'A', 'B', 'C', 'D', 'E', '\0'};		//string with string terminator
char name[] = "John";
//char *n = "John";										// string created in Heap

int StringLength(char string[])
{
	int i;
	for (i = 0; string[i] != '\0'; i++)					// search until i = \0
	{
	}
		cout << "Length is " << i << endl;
	return 0;
}



int main() {

	char s[] = "Welcome";

	StringLength(s);


	cout << alphaString << endl;
	cout << cArray << endl;
	cout << name << endl;
	cout << c << endl;
	return 0;
}