#include<iostream>
using namespace std;
class bc
{
public:int b;
void show()
{
cout<<"B="<<b<<endl;
}
bc findlarge(bc obj)
{
if(b>obj.b)
return *this;
else
return obj;
}
};
class dc:public bc
{
public:int d;
void show()
{
cout<<"B="<<b<<endl;
cout<<"D="<<d<<endl;
}
};
int main()
{
bc b1,b2;
b1.b=30;
b2.b=20;

bc large=b1.findlarge(b2);
cout<<"In large\n";
large.show();
bc *bptr;
bc base;
bptr=&base;
bptr->b=50;
cout<<"Base points to base class\n";
bptr->show();

dc derived;
dc *dptr;
dptr=&derived;
dptr->d=300;
dptr->b=100;
cout<<"derived  points to derived class\n";
dptr->show();
return 0;
}
