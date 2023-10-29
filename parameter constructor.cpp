#include <iostream>

using namespace std;
class Constructor
{
int a,b;
public:
Constructor(int ,int )

display()
{
cout<<"sum of a+b :"<<a+b;
}
};
Constructor::Constructor(int x,int y)
{
a=x;
b=y;
}

int main()
{
Constructor p(5,10);
p.display();
return 0;
}