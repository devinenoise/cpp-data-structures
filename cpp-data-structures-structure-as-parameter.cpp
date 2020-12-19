#include<iostream>
using namespace std;

struct Rectangle {
	int length;
	int width;
};

int areaByValue(struct Rectangle r1) {   // call by value 
	r1.length++;        // doesn't change actual parameters and copies the structure
	return r1.length * r1.width;
}

int areaByRef(struct Rectangle &r1) {  // call by reference affects the actual parameters
	r1.length++;
	return r1.length * r1.width;
}

int changeLength(struct Rectangle *p, int l) {  // call by address
	return p->length = l;

}

struct Rectangle *pointerFun() {               // return an address of a structure
	struct Rectangle *p;
	p = new Rectangle;

	p->length = 15;
	p->width = 7;

	return p;
}


int main()
{

	struct Rectangle *ptr = pointerFun();
	cout << ptr->length << endl << ptr->width << endl;  // 7 and 15

	Rectangle r = { 10,5 };

	cout << areaByValue(r) << endl;  //55
	
	cout << r.length << endl;		 // "10" actual parameters not affects by formal parameters


	cout << areaByRef(r) << endl;    //55

	changeLength(&r, 20);            // changing the length to 20

	cout << areaByValue(r) << endl;  //105
	
	cout << areaByRef(r) << endl;    //105

	cout << r.length << endl;		 // "21" actual parameters have been changed by reference

	return 0;


}