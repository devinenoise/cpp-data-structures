#include <iostream>

using namespace std;

struct Rectangle {  // definition
	int length; //2bytes
	int width;  //2bytes
	// total 4 bytes
};

int main()
{
	
	struct Rectangle r; // declaration
	

	r.length = 15; // accesing members with dot operative
	r.width = 10; 

	
	cout << "Area of Rectangle is " << r.length * r.width ;

	return 0;

};
