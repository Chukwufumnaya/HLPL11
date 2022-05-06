#include "std_lib_facilities.h"

int ga[10] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(int m[], int n)
{

	int la[10]={ };

	for (int i = 0; i < n; ++i)
		la[i] = m[i];

	for (int i = 0; i < n; ++i)
		cout << la[i] << endl;
	
	int *p = new int[n];

	for (int i = 0; i < n; ++i)
		p[i] = m[i];

	for (int i = 0; i < n; ++i)
		cout << p[i] << endl;

	delete[] p;

}

int fac(int n) {
	return n > 1 ? n * (fac(n - 1)) : 1;
}

int main()
try {

	cout << "Binary Array" << endl;
	f(ga, 10);

	int aa[10] = { };
	for (int i = 0; i < 10; ++i)
		aa[i] = fac(i + 1);

	cout << "Factorial Array" << endl;
	f(aa, 10);
}

catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}