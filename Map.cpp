#include<iostream>
#include<map>
using namespace std;

int main()
{
map<int ,int>person;
person.insert({2,35});
person.insert({3,5});
person.insert({4,6});
person.insert({5,36});
//erase any key
person.erase(5);

for(auto itr=person.begin();itr!=person.end();itr++)
{
cout<<itr->first<<" "<<itr->second<<endl;
}
cout<<"size "<<person.size()<<endl;
cout<<"maximum size(how much varriable can it store "<<person.max_size()<<endl;
//.empty()-->check map is empty or not
//0-->map is not empty
//1-->map is empty
cout<<"map is empty or not "<<person.empty()<<endl;
person.clear();
cout<<"map is empty or not "<<person.empty()<<endl;


}