#include <iostream>

using namespace std;

struct Rectangle {  // definition
	int length; //2bytes
	int width;  //2bytes
	// total 4 bytes
};
	
	struct Rectangle r1; // declaration

int main()
{
	
	r1.length = 15; // accesing members with dot operative
	r1.width = 10; 

	
	cout << "The area of Rectangle 1 is " << r1.length * r1.width ;

	return 0;

};
