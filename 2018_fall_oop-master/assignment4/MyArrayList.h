#ifndef MYARRAYLIST_H
#define MYARRAYLIST_H

using namespace std;
template < typename T>
class MyArrayList {

public:

	MyArrayList();
	MyArrayList(int x);
	bool addElement(T const &x);
	void printIt();

private:
	const static int DEFAULT_CAPACITY = 10;
	T* mass;
	int capacity = 0;
	int size = 0;

};

#endif

#include <iostream>


using namespace std;


template <typename T>
MyArrayList<T>::MyArrayList() {

	capacity = DEFAULT_CAPACITY;
	mass = new T[capacity];
	size = 0;
}
template <typename T>
MyArrayList<T>::MyArrayList(int x) {

	capacity = x;
	mass = new T[capacity];
	size = 0;

}
template <typename T>
bool MyArrayList<T>::addElement(T const &x) {
	if (capacity == size) { // for array size
		T *temp = new T[capacity * 2];
		for (int i = 0; i < capacity; i++) {
			temp[i] = mass[i];
		}
		mass = temp;
		capacity *= 2;  
	}
	mass[size] = x;
	size++;
	return true;
}
template <typename T>
void MyArrayList<T>::printIt() {
	cout << "{ ";
	for (int i = 0; i < size; i++) {
		cout << mass[i]<<" ";
	}
	cout << "}" << endl<<endl;
}
