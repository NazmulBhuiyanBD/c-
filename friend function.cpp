#include <iostream>

using namespace std;
class Complex
{
int a,b;
public:
void setnumber(int num1,int num2)
{
a=num1;
b=num2;
}
void printnum()
{
cout<<a<<"+"<<b<<"i"<<endl;
}
friend Complex sumcomplex(Complex o1,Complex o2);
};
Complex sumcomplex(Complex o1,Complex o2)
{
Complex o3;
o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
return o3;
}

int main()
{
Complex c1,c2,sum;
c1.setnumber(5,2);
c1.printnum();
c2.setnumber(4,2);
c2.printnum();

sum=sumcomplex(c1,c2);
sum.printnum();

}