#include<iostream>
using namespace std;

struct Rectangle {
	int length;
	int width;
};

int main()
{
	struct Rectangle r = { 11,5 };
	cout << r.length << endl;
	cout << r.width << endl;

	/*
	
	Rectangle *p;
	p = new Rectangle; //create object dynamically in the heap
	
	*/
		
	
	Rectangle *p = &r;  // pointer to the address
	
	p->length = 10;
	p->width = 5;
	
	
	cout << p->length << endl << p->width << endl;
	cout << r.length << endl << r.width << endl;

	return 0;
}