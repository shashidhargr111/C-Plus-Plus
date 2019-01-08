#include<iostream>
using namespace std;
int main()
{
int x,y;
cout<<"enter x value\n";
cin>>x;
int &y=x;
cout<<"x="<<x<<"\n";
cout<<"y="<<y<<endl;
cout<<"enter z value\n";
y=y+z;
cout<<"after addition"<<endl;
cout<<"x="<<x<<"\n";
cout<<"y="<<y<<endl;
return 0
}
