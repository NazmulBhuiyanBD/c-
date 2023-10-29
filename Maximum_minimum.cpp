#include <iostream>
#include<climits>

using namespace std;

int main()
{
int n;
cout << "enter number of array element you want to enter:" << endl;
cin>>n;
int array[n];


for(int i=0;i<n;i++)
{
cin>>array[i];
}
int armin=INT_MAX;
int armax=INT_MIN;
for(int i=0;i<n;i++)
{
armax=max(armax,array[i]);
armin=min(armin,array[i]);
}
cout<<"max "<<armax<<endl;
cout<<"min "<<armin<<endl;

return 0;
}