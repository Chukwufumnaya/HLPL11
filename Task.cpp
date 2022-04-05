#include "std_lib_facilities.h"
class Complex{
private:
    double complex;
    double re;
    double im;
public:
    Complex(){}
    Complex(double re, double im)
            :re(0), im(0) { }
    double getRE() const {return re;}
    double getIM() const {return im;}
    Complex operator + (Complex const &Complex2){
        Complex result;
        result.re = re + Complex2.re;
        result.im = im + Complex2.im;
        return result;
    }
    Complex operator << (const Complex&){
        cout << complex << endl;
    }
    
public:
    double modulus(Complex c);
    double a;
    double b;
    double z;
};

    double Complex::modulus(Complex c) {
        return z = sqrt(a*a + b*b);
    }

int main()
{
    return 0;
}