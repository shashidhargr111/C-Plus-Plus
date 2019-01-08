#include<iostream>
#include<math.h>
using namespace std;
double power(double m,int n)
{
return (pow(m,n));
}
int power(int m,int n)
{
return (pow(m,n));
}
int main()
{
int m,n,p;
double x,q;
cout<<"Enter double and integer no\n";
cin>>x>>n;
q=power(x,n);
cout<<"power value="<<q<<endl;
cout<<"Enter integer and integer no\n";
cin>>m>>n;
p=power(m,n);
cout<<"power value="<<p<<endl;
return 0;
}
