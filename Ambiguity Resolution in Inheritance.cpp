#include <iostream>

using namespace std;
class X
{
protected:
int x=5;
public:
void pk()
{
cout<<x;
}

};
class Y
{
protected:
int y=10;
public:
void pk()
{
cout<<y;
}

};
class Z:public X,public Y
{
protected:
int z=15;
public:
void pk()

{
Y::pk();
//cout<<"this is my ambuguitiu" <<endl;
}

void display()
{

cout<<"x is :"<<x<<endl;
cout<<"y is :"<<y<<endl;
cout<<"z is :"<<z<<endl;
}
};

int main()
{
Z p;
p.display();
p.pk();
return 0;
}