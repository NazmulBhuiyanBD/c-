#include<iostream>
using namespace std;
class Y;
class X{
int a;
public:
friend void add(X & ,Y &);
void setdata(int x)
{
a=x;

}
void display()
{
cout<<"after swaping a="<<a<<endl;
}
};
class Y{
int b;
friend void add(X & ,Y &);
public:
void setdata(int y)
{
b=y;
}
void display()
{
cout<<"after swaping b="<<b<<endl;
}

};
void add(X &o1,Y &o2)
{
int temp=o1.a;
o1.a=o2.b;
o2.b=temp;

}
int main()
{
X a;
Y b;
a.setdata(5);
b.setdata(7);
add(a,b);
a.display();
b.display();

}