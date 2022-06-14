#include <iostream>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

double sum(double a, double b) {
	return a + b;
}

int main(void) {
	int a = 1;
	int b = 2;
	int c = sum(a, b);

	double d = 1.1;
	double e = 2.2;
	double f = sum(d, e);

	cout << "c: " << c << endl;
	cout << "f: " << f << endl;
	return 0;
}
