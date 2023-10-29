#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string line;
ifstream file("Student.txt");

while(getline(file,line))
{
cout<<line<<endl;
}

file.close();
}