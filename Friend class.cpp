#include<iostream>
using namespace std;
class Y;
class P;
class X{
int a;
public:
friend class P;
void setdata(int x)
{
a=x;
}

};
class Y{
int b;
friend class P;
public:
void setdata(int y)
{
b=y;
}

};
class P
{
public:
int add(X o1,Y o2)
{
return o1.a+o2.b;
}
};

int main()
{
X a;
Y b;
P q;
a.setdata(5);
b.setdata(7);
int rest=q.add(a,b);
cout<<rest;
}