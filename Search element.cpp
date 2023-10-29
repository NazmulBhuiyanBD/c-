#include <iostream>
#include<climits>

using namespace std;

int call(int array[],int n)
{
int a;
cout<<"check which digit you want to search :\n"<<endl;
cin>>a;
for(int i=0;i<n;i++)
{
if(a==array[i])
return i;
}
return -1;
}

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

cout<<call(array,n);

return 0;
}