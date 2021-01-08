#include <iostream>

using namespace std;


int countVowels(char string[]) {
	int i;
	int vcount = 0;
	int ccount = 0;

	for (i = 0; string[i] != '\0'; i++) 
	{
		if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
		{
		vcount++;
		}
		else if (string[i] >= 65 && string[i] <= 90 || string[i] >= 97 && string[i] <= 122) {				// checking everything except vowels
			ccount++;
		}
	}	


	cout << "Your string has " << vcount << " vowels" << " and " << ccount << " consonents " << endl;

	return 0;

}


int countWords(char string[]) {
	int i;
	int word = 1;

	for (i = 0; string[i] != '\0'; i++)
	{
		if(string[i] == ' ' && string[i-1] != ' ')				// checks for an extra space and doesn't count it
		{
			word++;
		}
	}
	cout << "There are " << word << " words in your string" << endl;


	return 0;
}




int main() {


	char question[] = "How are you";

	countVowels(question);
	countWords(question);


	return 0;
}