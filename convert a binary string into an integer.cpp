#include <iostream>
#include <string>
using namespace std;

int main()
{
string bin_string = "10101010";
int number =0;

number = stoi(bin_string, 0, 2);
cout<<"bin_string: "<<bin_string<<endl;
cout<<"number: "<<number<<endl;
}