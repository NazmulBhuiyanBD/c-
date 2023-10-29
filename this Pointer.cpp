#include<iostream>
using namespace std;
class shop {
int a;
public:
setdat(int a)
{
this-> a=a;
}
getdata()
{
cout<<"id "<<a<<endl;

}
};

int main()
{
shop p;
p.setdat(4);
p.getdata();
}