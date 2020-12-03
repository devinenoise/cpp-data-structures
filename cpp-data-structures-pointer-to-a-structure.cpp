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

	
	//Create object dynamically in Heap
	
	Rectangle *p;
	p = new Rectangle; 
	
	//Rectangle *p = &r;  // pointer to the reference
	
	p->length = 10;
	p->width = 5;
	
	
	cout << p->length << endl << p->width << endl;
	cout << r.length << endl << r.width << endl;

	return 0;
}