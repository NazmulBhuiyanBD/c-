#include <iostream>
using namespace std;

class ComplexNumber {
private:
int real, imag;
public:
ComplexNumber(int r = 0, int i =0) {real = r; imag = i;}
void print() { cout << real << " + i" << imag << endl; }

// Operator overloading using friend function
friend ComplexNumber operator + (ComplexNumber const &, ComplexNumber const &);
};

ComplexNumber operator + (ComplexNumber const &c1, ComplexNumber const &c2) {
ComplexNumber res;
res.real = c1.real + c2.real;
res.imag = c1.imag + c2.imag;
return res;
}

int main() {
ComplexNumber c1(3, 4), c2(5, 6);
ComplexNumber c3 = c1 + c2; // equivalent to operator+(c1, c2)
c3.print();
return 0;
}