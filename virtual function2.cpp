#include <iostream>

using namespace std;
class base
{public:
int x=10;

virtual display()
{
cout<<"this is base class"<<endl;
cout<<"x= "<<x<<endl;

}
};
class derived:public base
{ int y=15;
public:
display()
{
cout<<"this is derived class"<<endl;
cout<<"y= "<<y<<endl;
cout<<"x= "<<x<<endl;

}

};

int main()
{
base *base_p;
base obj;
derived obj_de;
base_p=&obj_de;

base_p->display();
return 0;
}