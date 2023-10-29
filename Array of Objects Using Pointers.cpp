#include<iostream>
using namespace std;
class shop {
int id;
float price;
public:
setdat(int a,int b)
{
id=a;
price=b;
}
getdate()
{
cout<<"your product id "<<id<<endl;
cout<<"your product price "<<price<<endl;

}
};

int main()
{
int p,q;
shop *ptr=new shop[3];
shop *temptr=ptr;
for(int i=0;i<3;i++)
{
cout<<"enter your product & your product price "<<endl;
cin>>p>>q;
ptr->setdat(p,q);
ptr++;
}
for(int i=0;i<3;i++)
{
temptr->getdate();
temptr++;
}
}