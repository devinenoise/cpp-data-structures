#include <iostream>
using namespace std;


template<class T>
class Array				// a class should have data members and a member function
{
private:
	T* A;				// dynamically create the array that can be int or float
	int size;
	int length;

public: 
	Array()					// non parameterized constructor
	{
		size = 10;
		A = new T[10];		// created in Heap using T
		length = 0;

	}

	Array(int sz)			// parameterized constructor with desired size
	{
		size = sz;
		length = 0;
		A = new T[size];		// using T
	}

	~Array()
		
		{
		
		delete[]A;
		
		};

	void Display();
	void Insert(int index, T x);
	T Delete(int index);				// return type is T


};

template<class T>						// template declared before each function
void Array<T>::Display()				// template class T
{
	int i;
	cout << "Elements are ";
	for (i=0; i < length; i++)
		cout << A[i] << "  ";
		cout << endl;
}

template<class T>
void Array<T>::Insert(int index, T x)					// T parameter
{
	if (index >= 0 && index <= length)
	{
		for (int i = length - 1; i >= index; i--)
			A[i + 1] = A[i];
		A[index] = x;
		length++;
	}
}

template<class T>
T Array<T>::Delete(int index) {
	T x = 0;										// T variable

	if (index >= 0 && index < length)
	{
		x = A[index];
		cout << "Deleted elements are ";
		for (int i = index; i < length - 1; i++)
			A[i] = A[i + 1];
		length--;
		}
	return x;
}


int main() {

	Array<int> arr(10);								// class with <int> 

	arr.Insert(0, 5);
	arr.Insert(1, 6);
	arr.Insert(2, 9);

	arr.Display();									// display 5, 6, 9, 

	cout << arr.Delete(0) << endl;

	arr.Display();									// diplay 6, 9

	return 0;

}