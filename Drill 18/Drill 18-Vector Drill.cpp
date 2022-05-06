#include "std_lib_facilities.h"

vector<int> gv = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

void f(vector<int> av)
{
	vector<int> lv(10);

	lv = av;

	for (int a : lv)
		cout << a << endl;

	vector<int> lv2 = av;

	for (int a : lv2)
		cout << a << endl;
}

int fac(int n) {
	return n > 1 ? n * (fac(n - 1)) : 1;
}

int main()
try {
	f(gv);

	vector<int> vv(10);
	for (int i = 0; i < 10; ++i)
		vv[i] = fac(i + 1);

	f(vv);
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}