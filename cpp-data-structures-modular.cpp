#include <iostream>
#include <stdio.h>

using namespace std;

// find the area and perimeter of a rectangle using input from the user

struct Rectangle {
	int length;
	int width;
};

void initialize(struct Rectangle* r, int l, int w) {
	r->length = l;
	r->width = w;
}

int area(struct Rectangle r) {
	return r.length * r.width;
}

int perimeter(struct Rectangle r) {
	int p;
	p = 2 * (r.length + r.width);
	return p;
}


int main()
{
	Rectangle r = { 0, 0 };

	int l, w;

	cout << "Enter Length and Width " << endl;
	cin >> l >> w;

	initialize(&r, l, w);

	int a = area(r);
	int p = perimeter(r);

	cout << "The area is " << a << endl << "The perimeter is " << p << endl;


	return 0;

}