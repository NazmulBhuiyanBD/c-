#include <iostream>
using namespace std;
class student
{
protected:
int id;
public:
void set_roll(int);
void get_roll();
};
void student::set_roll(int a)
{
id=a;
}
void student::get_roll()
{
cout<<"your id is :"<<id<<endl;
}
class exam:public student
{
protected:
float math,phy;
public:
void set_mark(float,float);
void get_mark();
};
void exam:: set_mark(float a,float b)
{
math=a;
phy=b;
}
void exam:: get_mark()
{
cout<<"your math marks is "<<math<<endl;
cout<<"your physics marks is "<<phy<<endl;
}
class result:public exam
{
public:
display()
{
get_mark();
get_roll();
cout<<"your percentage marks are "<<(math+phy)/2<<endl;
}
};


int main()
{
result p;
p.set_roll(223065);
p.set_mark(90.4,92.6);
p.display();
return 0;
}