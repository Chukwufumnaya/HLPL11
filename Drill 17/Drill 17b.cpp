#include "std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << "  ";
		return os;
}
int main()
try {
	
	int x = 7;
	int* p1 = &x;


	cout << "p1 ="<< p1 << " and it points to" << *p1 << endl;

	
	int* p2 = new int[7];
	x = 1;
	for (int i = 0; i < 7; ++i)
	{
		p2[i] = x;
		x *= 2;
	}
	
	
    for (int j = 0; j < 7; ++j)
        cout << p2[j] << endl;
	
	

	int* p3 = p2;
	p2 = p1;
	p2 = p3;


	cout << "p1 =" << p1 << "and it points to " << *p1 << endl;
	cout << "p2 =" << p2 << "and it points to " << *p2 << endl;


	delete[] p2;

	p1 = new int[10]{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };

	
	p2 = new int[10];

	for (int l = 0; l < 10; ++l)
		p2[l] = p1[l];

	for (int k = 0; k < 10; ++k)
        cout << p2[k] << endl;
	


	vector<int> v1 = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512 };
	vector<int> v2(10);
	v1 = v2;

	for (int v : v2) cout << v << endl;
	
	

}
catch (exception& e)
{
	cerr << "Exception: " << e.what() << endl;
	return 1;
}
catch (...)
{
	cerr << "Exception!" << endl;
	return 2;
}
