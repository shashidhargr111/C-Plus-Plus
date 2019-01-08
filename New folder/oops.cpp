#include<iostream>
using namespace std;
int m=10;
int main()
{
int m=20;
{
int k=m;
int m=30;
cout<<"we are in inner block";
cout<<"k="<<k;
cout<<"m="<<m<<"\n";
cout"::m="<<::m<<"\n";
}
cout<<"we are in outter block";
cout<<"m="<<m<<"\n";
cout<<"::m="<<::m<<"\n";
return 0;
}
