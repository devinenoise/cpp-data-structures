#include<iostream>
using namespace std;

struct Rectangle {
	int length;
	int width;
};

int areaByValue(struct Rectangle r1) {   // call by value 
	r1.length++;        // doesn't change actual params
	return r1.length * r1.width;
}

int areaByRef(struct Rectangle &r1) {  // call by reference affects the actual parameters
	r1.length++;
	return r1.length * r1.width;
}

int changeLength(struct Rectangle *p, int l) {  // call by address
	return p->length = l;

}


int main()
{

	Rectangle r = { 10,5 };

	cout << areaByValue(r) << endl;  //50
	
	cout << r.length << endl;		 // actual parameters not affects by formal params


	cout << areaByRef(r) << endl;    //55

	changeLength(&r, 20);            

	cout << areaByValue(r) << endl;  //100
	
	cout << areaByRef(r) << endl;    //105

	return 0;


}