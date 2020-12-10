#include <iostream>


using namespace std;

class Rectangle
{
private:
	int length;
	int width;

public:

	Rectangle() {						// default constructor function 
		length = 0;
		width = 0;
	}
	Rectangle(int l, int w) { 			// parametrized constructor 
		length = l;
		width = w;
	}
	int area() {						// facilitator function
		return length * width;
	}
	int perimeter() {					// facilitator function
		return 2 * (length + width);

	}
	int getLength() {					// accessor or getter function
		return length;
	}
	int getWidth() {					// accessor or getter function
		return width;
	}
	void setLength(int l) {				// mutator or setter function
		length = l;
	}
	void setWidth(int w) {				// mutator or setter function
		width = w;
	}

	~Rectangle() {						// destructor
		
	};						  

};


int main()
{
	
	Rectangle r(10, 5);
	cout << "Area is "<< r.area() << endl;
	cout << "Perimeter is " << r.perimeter() << endl;

	
	return 0;

}