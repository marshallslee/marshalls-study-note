#include <iostream>

using namespace std;

template<typename T, int N> void print_array(T (&arr)[N]) {
	for(int i=0; i<N; i++) {
		cout << arr[i] << endl;
	}
}

int main(void) {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	print_array(arr);
	return 0;
}
