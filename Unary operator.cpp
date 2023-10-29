#include <iostream>

using namespace std;
class opert
{
int x;
public:
void get(int a)
{
x=a;
}
void display()
{
cout<<x<<endl;
}
void operator -()
{
x=-x;

}
};

int main()
{
opert p;
p.get(5);

cout<<"p"<<endl;
p.display();
-p;
cout<<"-p"<<endl;
p.display();

return 0;
}