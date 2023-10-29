#include <iostream>
#include<climits>

using namespace std;

int call(int array[],int n)
{
int a;
cout<<"check which digit you want to search :\n"<<endl;
cin>>a;
int s=0;
int e=n;
int mid;
while(s<=n)
{
mid=(s+e)/2;
if(array[mid]==a)
{
return mid;
}
if(array[mid]>a)
{
e=mid-1;
}
else
{
s=mid+1;
}
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