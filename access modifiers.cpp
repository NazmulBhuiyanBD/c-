#include <iostream>
using namespace std;
class Employee{
private:
int a,b,c;
public:
int d,e;
void setdata(int a1,int b1,int c1);
void getdata()
{
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of c is "<<c<<endl;
cout<<"the value of d is "<<d<<endl;
cout<<"the value of e is "<<e<<endl;
}

};
void Employee :: setdata(int a1,int b1,int c1)
{
a=a1;
b=b1;
c=c1;
}

int main()
{ Employee p;
p.setdata(5,7,9);
p.d=10;
p.e=50;
p.getdata();

return 0;
}