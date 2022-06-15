#include <iostream>

using namespace std;

template<int size, typename T>
T* init(T t) {
	T* arr = new T[size];
	for(int i=0; i<size; i++) {
		arr[i] = t;
	}
	return arr;
}

int main(void) {
	int *i10 = init<10>(42);
	for(int i=0; i<10; i++) {
		cout << i10[i] << ' ';
	}
	cout << endl;
	delete []i10;
	return 0;
}
