#include<iostream>
using namespace std;
class Y;
class X{
int a;
public:
friend int add(X o1 ,Y o2);
void setdata(int x)
{
a=x;
}

};
class Y{
int b;
friend int add(X o1 ,Y o2);
public:
void setdata(int y)
{
b=y;
}

};
int add(X o1,Y o2)
{
return o1.a+o2.b;
}
int main()
{
X a;
Y b;
a.setdata(5);
b.setdata(7);
int rest=add(a,b);
cout<<rest;
}