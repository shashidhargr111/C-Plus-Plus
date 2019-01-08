#include<iostream>
using namespace std;
class SHAPE
{
public:
double x,y;
void getdata()
{
cin>>x>>y;
}
virtual void display()=0;
};


class TRIANGLE:public SHAPE
{
public:void read()
{
cout<<"Enter base and hieght value\n";
getdata();
}
void display()
{
cout<<"Area of triangle="<<0.5*x*y<<endl;
}
};


class RECTANGLE:public SHAPE
{
double z;
public:void readdata()
{
cout<<"Enter length,breadth and Height value\n";
getdata();
cin>>z;
}
void display()
{
cout<<"Area of rectangle="<<x*y*z<<endl;
}
};


int main()
{
RECTANGLE r;
TRIANGLE t;
t.read();
t.display();
r.readdata();
r.display();
return 0;
}

