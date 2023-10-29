#include <iostream>
#include<vector>
using namespace std;

int main()
{
vector <int>v;
v.push_back(5);// value add hobe index wise
v.push_back(3);
v.push_back(1);
v.push_back(8);
v.push_back(10);

//cout << v[0] <<" "<< v[1]<<" " << v[2]<<endl;

//cout<<v.at(3)<<" "<<v.at(1)<<endl;

//cout<<v.size()<<endl;

for(int i=0;i<v.size();i++)
{
cout<<v.at(i)<<" ";
}
cout<<endl;

v.insert(v.begin(),3);

//v.pop_back();//last index delete hobe

//v.erase(v.begin()+2); -->index 2 a data erase howe jabe
v.erase(v.begin()+2,v.begin()+4);//2 no index thake 4 no index porjonto data delete hobe


for(int i=0;i<v.size();i++)
{
cout<<v.at(i)<<" ";
}
cout<<endl;

//cout<<v.front()<<" "<<v.back()<<endl; -->front & back ar data print hobe

//v.clear(); -->everything will be deleted
/*cout<<v.size()<<endl;

if(v.empty()){cout<<"empty"<<endl;}
else{cout<<"not empty"<<endl;}*/


return 0;
}