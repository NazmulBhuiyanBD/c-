#include <iostream>
using namespace std;

int main()
{ int x=10;
int *ptr=&x;
cout<<*ptr<<endl;
cout<<ptr<<endl;
int *arr=new int[3];
arr[0]=5;
arr[1]=15;
arr[2]=25;
//delete [] arr;
cout << "The value of arr[0] is " << arr[0] << endl;
cout << "The value of arr[1] is " << arr[1] << endl;
cout << "The value of arr[2] is " << arr[2] << endl;

return 0;
}