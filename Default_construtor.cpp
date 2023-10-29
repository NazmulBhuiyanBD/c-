#include <iostream>

using namespace std;
class Constructor
{
int a,b;
public:
Constructor(void);
display()
{
cout<<"sum of a+b :"<<a+b;
}
};
Constructor::Constructor(void)
{
a=10;
b=5;
}

int main()
{
Constructor p;
p.display();
return 0;
}