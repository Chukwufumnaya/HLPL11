#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << "\n";
}
void print_vector(ostream& os, vector<int>& v)
{
    for (int vv : v) os << vv << '\n';
    return os;
}

int main()
try {
	int* an = new int[10];
	for (int i = 0; i < 10; ++i)
		cout << "Int " << i << ": " << an[i] << endl;
	delete[] an;
	
	vector<int>b(10);
	int y = 100;
	for (int& v:b)
	{
		v=y;
		++y;
	}
	print_vector(cout, b);
	
	vector<int>c(11);
	int y =100;
	for (int& v:c)
	{
		v=y;
		++y;
	}
	print_vector(cout, c);

	vector<int>d(20);
	int y = 100;
	for (int& v:d)
	{
		v=y;
		++y;
	}
	print_vector(cout, d);

}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
}
catch (...) {
	cerr << "exception\n";
}