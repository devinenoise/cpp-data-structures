#include <iostream>
#include <stdio.h>

using namespace std;

// find the area and perimeter of a rectangle using input from the user

int area(int length, int width) {
	return length * width;
}

int perimeter(int length, int width) {
	int p;
	p = 2 * (length + width);
	return p;
}


int main()
{

	int length = 0, width = 0;

	cout << "Enter Length and Width " << endl;
	cin >> length >> width;

	int a = area(length, width);
	int p = perimeter(length, width);

	cout << "The area is " << area << endl << "The perimeter is " << p << endl;


	return 0;

}