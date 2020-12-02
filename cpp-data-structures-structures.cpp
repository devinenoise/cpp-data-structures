#include <iostream>

using namespace std;

struct Rectangle { 
	int length; 
	int width;  
	
};
	

int main()
{
	
	
	struct Rectangle r1 = { 10, 15 };

	r1.length = 20;
	r1.width = 30;
	
	cout << "The area of Rectangle 1 is " << r1.length * r1.width << " and the size of the structure is " << sizeof(r1) << " bytes.";

	return 0;

};
