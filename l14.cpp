#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
char name[10][10];
int code[10],i,n;
double cost[10];
cout<<"Enter number of items\n";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"Enter item name\n";
cin>>name[i];
cout<<"Enter item code\n";
cin>>code[i];
cout<<"Enter item cost\n";
cin>>cost[i];
}
cout<<"Item NAME"<<setw(15)<<"Item CODE"<<setw(15)<<"Item COST"<<endl;
for(i=0;i<n;i++)
{
cout.fill('-');
cout.width(15);
cout.setf(ios::left,ios::adjustfield);
cout<<name[i];
cout.width(15);
cout.setf(ios::left,ios::adjustfield);
cout<<code[i];
cout.width(15);
cout.precision(5);
cout.setf(ios::right,ios::adjustfield);
cout<<cost[i]<<endl;
}
return 0;
}
