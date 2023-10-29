#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
string name;
ofstream file;
file.open("Student.txt",ios::out|ios::app);
cout<<"enter your name"<<endl;
getline(cin,name);
file<<"Welcome "<<name<<endl;
file.close();

cout << "your data is stored" << endl;
return 0;
}