#include<iostream>
using namespace std;
class GF
{
char name[10];
int age;

public:void getgf()
{
cout<<"Enter grand father name and age\n";
cin>>name>>age;
}
void putgf()
{
cout<<"Inside grand father class\n";
cout<<"NAME="<<name<<endl;
cout<<"AGE="<<age<<endl;
}
};

class FT:public GF
{
char name[10];
int age;
public:
void getft()
{
getgf();
cout<<"Enter father name and age\n";
cin>>name>>age;
}
void putft()
{
putgf();
cout<<"Inside father class\n";
cout<<"NAME="<<name<<"\n";
cout<<"AGE="<<age<<"\n";
}
};

class SON:public FT
{
char name[10];
int age;
public:
void gets()
{
getft();
cout<<"Enter son name and age\n";
cin>>name>>age;
}
void puts()
{
putft();
cout<<"Inside son class\n";
cout<<"NAME="<<name<<endl;
cout<<"AGE="<<age<<endl;
}
};

int main()
{
SON x;
x.gets();
x.puts();
return 0;
}
