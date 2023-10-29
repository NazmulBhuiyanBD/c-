#include<iostream>
#include<vector>
using namespace std;
int main()
{int ln;
vector <int> data={1,2,4};

data.insert(data.end(),2,5);
ln=data.size();
for(int i=0;i<ln;i++)
{
cout<<data[i]<<" ";
}

return 0;
}