#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
int age;
string name;
ofstream file;
file.open("Student.txt",ios::out|ios::app);
for(int i=1;i<=3;i++)
{
cout<<"enter your name"<<endl;
getline(cin,name);
file<<name<<"\t";
cout<<"enter your age";
cin>>age;
file<<age<<endl;
cin.ignore();
}

file.close();

cout << "your data is stored" << endl;
return 0;
}