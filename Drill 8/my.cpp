#include "my.h"
#include "std_lib_facilities.h"
void swap_v(int a,int b)
{
    int temp;
    temp = a;
    a=b;
    b = temp;

    cout << a << b << endl;

 return;
}
void swap_r(int& a,int& b)
{
    int temp;
    temp = a;
    a=b;
    b = temp;

    cout << a << b << endl;

 return;
}
void swap_cr(const int& a, const int& b)
{
    int temp;
    int temp2;

    temp = a;
    temp2 = b;

    swap_r(temp, temp2);

    return;
}


