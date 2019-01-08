#include<iostream>
using namespace std;
class COMPLEX
{
int real,img;
public:void getdata()
{
cout<<"Enter real and imaginary numbers\n";
cin>>real>>img;
}
void putdata()
{
cout<<real<<"+"<<img<<"i"<<endl;
}
friend COMPLEX add(COMPLEX,COMPLEX);
};
COMPLEX add(COMPLEX a,COMPLEX b)
{
COMPLEX c;
c.real=a.real+b.real;
c.img=a.img+b.img;
return c;
}
int main()
{
COMPLEX a,b,c;
a.getdata();
b.getdata();
c=add(a,b);
cout<<"Complex number 1\t";
a.putdata();
cout<<"Complex number 2\t";
b.putdata();
cout<<"Result of adding two complex numbers is\t";
c.putdata();
return 0;
}
