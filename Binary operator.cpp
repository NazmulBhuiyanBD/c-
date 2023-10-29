#include <iostream>

using namespace std;
class opert
{
int x,y;
public:
void get(int a,int b)
{
x=a;
y=b;
}
void display()
{
cout<<x<<" "<<y<<endl;
}
opert operator -(opert a)
{
opert s;
s.x=x-a.x;
s.y=y-a.y;
return s;

}
};

int main()
{
opert p,q,r;
p.get(5,10);
q.get(3,9);
p.display();
cout<<"p"<<endl;
q.display();
cout<<"q"<<endl;
r=p-q;
r.display();
cout<<"r";
return 0;
}