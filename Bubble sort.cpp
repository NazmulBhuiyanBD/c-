#include <iostream>

using namespace std;

int main()
{
int n,counter=1,temp;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
while (counter<n)
{
for(int i=0;i<n-counter;i++)
{
if(arr[i]>arr[i+1])
{
temp=arr[i];
arr[i]=arr[i+1];
arr[i+1]=temp;
}
}
counter++;
}

cout << "after bubble sort!" << endl;
for(int i=0;i<n;i++)
{
cout<<arr[i]<<" "<<endl;
}
return 0;
}