#include <iostream>
using namespace std;

class Base
{
int x,y;
public:
Base(int a,int b):x(a),y(b+x) //Base(int i, int j) : b(j), a(i+b)
// Base(int i, int j) : a(i), b(a + j)
{
cout<<"this is a "<<x<<endl;
cout<<"this is b "<<y<<endl;
}

};

int main()
{ Base p(5,7);
return 0;
}