#include <iostream>

using namespace std;

template<class myt>
myt add(myt a,myt b)
{
return a+b;
}

int main()
{
cout<<add(10,20)<<endl;
cout<<add(10.5,20.5)<<endl;
}