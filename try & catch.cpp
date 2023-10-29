#include <iostream>

using namespace std;

int main()
{
while(1)
{
int n,q;
try
{
cin>>n>>q;
if(q==0)
{
throw -1;
}
cout<<n/q;
}
catch(int x)
{
cout << "enter a valid digit :" << endl;
cout << "try again later" << endl;
}

}

}