#include <iostream>

using namespace std;

class shop
{
int itemId[100];
int itemp[100];
int counter;
public:
void intcounter(void)
{
counter=0;
}
void setprice(void);
void display(void);
};
void shop::setprice(void)
{
cout<<"enter your product id of "<<counter+1<<endl;
cin>>itemId[counter];
cout<<"enter price of your "<<counter +1<<endl;
cin>>itemp[counter];
counter++;
}
void shop:: display(void)
{
for(int i=0;i<counter;i++)
{
cout<<itemId[i]<<" price is "<<itemp[i]<<endl;
}
}

int main()
{
shop dokan;
dokan.intcounter();
dokan.setprice();
dokan.setprice();
dokan.setprice();
dokan.display();
return 0;
}