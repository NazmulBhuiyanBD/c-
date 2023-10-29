#include <iostream>

using namespace std;
class A
{
public:
int x=10;

};
class X:virtual public A
{

} ;
class Y:virtual public A
{

};
class Z:public X,public Y
{
public:
view()
{
cout<<x;
}

};

int main()
{
Z p;
p.view();
return 0;
}