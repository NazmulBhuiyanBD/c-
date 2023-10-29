#include <iostream>

using namespace std;

class employee
{
public:
int id;
float salary=3.17;
employee(int idp)
{
id=idp;
salary=3.17;
cout<<id<<endl;
cout<<salary<<endl;
}
employee(){}
};
//class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
class programmer:public employee
{
public:
programmer()
{
cout<<id<<endl;
cout<<salary<<endl;
}


};
int main()
{
employee p(5);
programmer q;
return 0;
}