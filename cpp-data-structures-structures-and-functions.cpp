#include <iostream>

using namespace std;

struct Rectangle {
	int length;
	int width;

};

void initialize(struct Rectangle *r, int l, int w) {
		r->length = l;
		r->width = w;
}

int area(struct Rectangle r) {
	return r.length * r.width;
}

void changeLength(struct Rectangle *r, int l) {
	r->length = l;
}

int main()
{


	struct Rectangle p;

	initialize(&p, 10, 15);					// set values and call by address

	area(p);								// find the area and call by value
	cout << area(p) << endl;				// 150

	changeLength(&p, 20);					// changing length and call by address

	cout << area(p) << endl;				// 300

	return 0;

};
