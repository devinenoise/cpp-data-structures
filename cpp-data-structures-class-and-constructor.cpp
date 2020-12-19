#include <iostream>
using namespace std;


class Rectangle {

private: 

	int length;
	int width;

public:
	Rectangle(int l, int w) {		// constructor to act as an initializer
		length = l;
		width = w;
	}

	int area() {
		return length * width;
	}

	void changeLength(int l) {
		length = l;
	}

};

int main()
{
	Rectangle r(10,5);  // object with direct initialization

	// invoking the functions in the class
	r.area();
	cout << r.area() << endl;

	r.changeLength(20);
	
	cout << r.area() << endl;
	return 0;

};