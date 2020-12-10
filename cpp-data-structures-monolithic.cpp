#include <iostream>
#include <stdio.h>

using namespace std;

// find the area and perimeter of a rectangle using input from the user


int main()
{
	
	int length = 0 , width = 0;

	cout << "Enter Length and Width " << endl;
	cin >> length >> width;

	int area = length * width;
	int peri = 2 * (length + width);

	cout << "The area is " << area << endl << "The permiter is " << peri << endl;
	return 0;

};