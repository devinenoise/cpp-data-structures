#include <iostream>

using namespace std;


//template class allows for any data type
template <class T>
class Arithmetic {
private:
	T a;			                  // T takes the place of int in this case
	T b;
public:
	Arithmetic(T a, T b);
	T add();							
	T sub();

};


template <class T>
	Arithmetic<T>::Arithmetic(T a, T b) {            
		this->a= a;
		this->b= b;
	}
template <class T>
	T Arithmetic<T>::add() {
		T c;
		c = a + b;
		return c;
	}
template <class T>
	T Arithmetic<T>::sub() {
		T c;
		c = a - b;
		return c;
	}



int main()
{
	Arithmetic<int> ar(10, 5);
	cout << "Add is " << ar.add() << endl;
	cout << "Sub is " << ar.sub() << endl;
	
	
	Arithmetic<float> ar1(10.2, 5.7);
	cout << "Add is " << ar1.add() << endl;
	cout << "Sub is " << ar1.sub() << endl;



	return 0;

}