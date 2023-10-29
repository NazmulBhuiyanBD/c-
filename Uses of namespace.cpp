#include <iostream>
#include<string>

using std::cout;
using std::endl;
using std::string;
namespace namespace1{
int age=25;
std::string name="nazmul";
}
namespace namespace2{
int age=27;
std::string name="bhuiyan";
}

int main()
{
std::cout << namespace1::age << std::endl;
std::cout << namespace2::name << std::endl;
return 0;
}