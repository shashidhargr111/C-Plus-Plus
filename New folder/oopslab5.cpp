#include<iostream>
#include<math.h>
using namespace std;
double power(double m, int n)
{
return (pow(m,n));
}
int power(int m,int n)
{
return(pow(m,n));
}
int main()
{
int a,b,p;
double x,q;
cout<<"enter double value\n";
cin>>x>>b;
q=power(x,b);
cout<<"power="<<q;
cout<<"enter integer\n";
cin>>a>>b;
p=power(a,b);
cout<<"power="<<p;
return 0;
}
