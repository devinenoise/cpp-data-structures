#include <iostream>
#include <stdio.h>

using namespace std;

// find the area and perimeter of a rectangle using input from the user

class Rectangle {
	
public:
	int length = 0;
	int width = 0;

void initialize(int l, int w) {
	length = l;
	width = w;
}

int area() {
	return length * width;
}

int perimeter() {
	int p;
	p = 2 * (length + width);
	return p;
}

};

int main()
{
	Rectangle r;

	int l, w;

	cout << "Enter Length and Width " << endl;
	cin >> l >> w;

	r.initialize(l, w);

	int a = r.area();
	int p = r.perimeter();

	cout << "The area is " << a << endl << "The perimeter is " << p << endl;


	return 0;

}