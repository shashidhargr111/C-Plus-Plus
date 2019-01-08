#include<iostream>
using namespace std;
inline int largest(int x,int y,int z)
{
int  p=x>y?x:y;
 p=p>z?p:z;
return p;
}
int main()
{
int a,b,c,large;
cout<<"enter three numbers";
cin>>a>>b>>c;
large=largest(a,b,c);
cout<<"large="<<large;
return 0;
}                            
