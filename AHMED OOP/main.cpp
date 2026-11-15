#include <iostream>

using namespace std;
class Book
{
public:
string name;
string auther;
int prisce;

void ahmed()
{
    cout<<"the name of book"<<name<<endl;
     cout<<"the name of book"<<auther<<endl;
      cout<<"the name of book"<<prisce<<endl;
}



};
int main()
{
 Book s1;
 Book s2;

cout<<"s1\n";
 s1.name="aaaaa";
 s1.auther="sssssss;
 s1.prisce=120;
s1.ahmed();
cout<<"s2\n";
 s2.name="wwww";
 s2.auther="dddddds";
 s2.prisce=234;
s2.ahmed();



    return 0;
}
