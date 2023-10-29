/*
Case1:
class B: public A{
// Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
// Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
// Order of execution of constructor -> C() then B() and A()
};

*/

#include <iostream>

using namespace std;

class Base1
{
int x;
public:
Base1(int a)
{
x=a;
cout<<"Base 1 called"<<endl;
}
display1()
{
cout<<"base 1 data is :"<<x<<endl;
}
};
class Base2
{
int y;
public:
Base2(int b)
{
y=b;
cout<<"Base 2 called"<<endl;
}
display2()
{
cout<<"base 2 data is :"<<y<<endl;
}
};
class Derived:public Base1,public Base2
{
int p,q;
public:
Derived(int a,int b,int c,int d):Base1(a),Base2(b)
{
p=c;
q=d;
cout<<"Derived called"<<endl;
}
display3()
{
cout<<"p data is :"<<p<<endl;
cout<<"q data is :"<<q<<endl;
display1();
display2();

}
};
int main()
{ Derived p(5,7,8,9);
p.display3();

cout << "Hello world!" << endl;
return 0;
}