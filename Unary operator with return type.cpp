#include <iostream>
using namespace std;
class pt
{
int x;
public:
pt()
{
x=10;
}
//post-fix
pt operator ++()
{
pt temp;
temp.x=x++;
return temp;
}
pt operator ++(int)
{
pt temp;
temp.x=++x;
return temp;
}
void display()
{
cout<<x<<endl;
}
};
int main()
{

pt p,q;
p.display();
q=++p;
q.display();
q=p++;
q.display();

}