#include <iostream>

using namespace std;
class X
{
protected:
int x=5;

};
class Y
{
protected:
int y=10;

};
class Z:public X,public Y
{
protected:
int z=15;
public:
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
return 0;
}