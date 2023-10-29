#include <iostream>

using namespace std;
class number
{
int a;
public:
number(){a=0;}
number(int n)
{
a=n;
}
number(number &obj)
{

a=obj.a;
cout<<"copy construction is called"<<endl;
}
display()
{
cout<<"the value of a :"<<a<<endl;
}
};

int main()
{
number x,y(50);
x.display();
y.display();
number z(x);
z.display();

return 0;
}