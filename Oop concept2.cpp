#include <iostream>
#include<string>

using namespace std;

class binary
{
string s;
public:
void read(void);
void ck_b(void);
void ones_cp(void);
void display(void);
};
void binary ::read(void)
{
cout<<"enter binary "<<endl;
cin>>s;
}
void binary::ck_b(void)
{
for(int i=0;i<s.length();i++)
{
if(s.at(i)!='0' && s.at(i)!='1')
{
cout<<"incorrect binary";
exit(0);
}

}
}

void binary::ones_cp(void)
{
for(int i=0;i<s.length();i++)
{
if(s.at(i)=='1')
{
s.at(i)='0';
}
else
s.at(i)='1';
}
}
void binary:: display(void)
{
cout<<s<<endl;
}
int main()
{
binary b;
b.read();
b.ck_b();
b.ones_cp();
b.display();


return 0;
}