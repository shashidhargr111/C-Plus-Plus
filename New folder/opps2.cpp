#include<iostream>
using namespace std;
int volume(int l)
{
return(l*l*l);
}
int volume(int l,int h,int b)
{
return(l*h*b);
}
float volume(float r,float h)
{
return(3.14*r*r*h);
}
int main()
{
int a,b,c,vol;
cout<<"enter cube edge";
cin>>a;
vol=volume(a);
cout<<"cube volume="<<vol;
cout<<"enter rectangle b,h,l";
cin>>a>>b>>c;
vol=volume(a,b,c);
cout<<"recteangular volume="<<vol;
cout<<"enter cylinder r andh";
cin>>a>>b;
float f=volume(a,b);
cout<<"cylinder volume="<<f;
return 0;
}
