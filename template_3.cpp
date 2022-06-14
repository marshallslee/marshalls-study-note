#include <iostream>

using namespace std;

template<typename T, typename U>
T max(T a, U b) {
	return (a > b) ? a : b;
}

int main(void) {
	cout << max(false, 100.99) << endl;
	cout << max(100.99, false) << endl;

	int mVal = max<int>(false, 100.99);
	cout << "mVal: " << mVal << endl;

	return 0;
}
