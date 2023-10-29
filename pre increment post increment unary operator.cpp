#include <iostream>

using namespace std;
class pt
{
int x=10;
public:
void operator ++()
{
++x; //pre-increment
}
void operator ++(int)
{
x++; //post -increment
}
void display()
{
cout<<x<<endl;
}
};
int main()
{

pt p;
p.display();
++p;
p.display();
p++;
p.display();
}
