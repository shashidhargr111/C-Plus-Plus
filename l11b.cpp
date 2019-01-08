#include<iostream>
using namespace std;
class STUDENT
{
public:
int reg,mark;
char name[10];
void getdata()
{
cout<<"Enter reg_no,name,marks\n";
cin>>reg>>name>>mark;
}
void putdata()
{
cout<<"REG_NO="<<reg<<endl;
cout<<"NAME="<<name<<endl;
}
};

class SPORT
{
static int regn;
public:
static void getreg()
{
cout<<"Enter reg_no of student in sport\n";
cin>>regn;
}
int putreg()
{
return regn;
}
};

int SPORT::regn;
class RESULT:public STUDENT,public SPORT
{
public:
void putresult()
{
int x=putreg();
if(x==reg && mark<=90)
{
cout<<"Student present in SPORTS\n";
putdata();
cout<<"MARKS="<<mark+10<<endl;
}
else
{
cout<<"Student not in SPORTS\n";
putdata();
cout<<"MARKS="<<mark<<endl;
}
}
};


int main()
{
RESULT r1,r2;
r1.getdata();
r2.getdata();
RESULT::getreg();
r1.putresult();
r2.putresult();
return 0;
}
