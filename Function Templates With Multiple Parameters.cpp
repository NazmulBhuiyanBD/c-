#include <iostream>

using namespace std;

template<class myt,class trx>
myt add(myt a,trx b)
{
return a+b;
}

int main()
{
cout<<add(10,20)<<endl;
cout<<add(10.5,20)<<endl;
}