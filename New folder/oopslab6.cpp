#include<iostream>
using namespace std;
class EMPLOYEE
{
int id,salary;
char name[10];
public:void get();
	void put();
};
void EMPLOYEE::get()
{
cout<<"enter id:\t";
cin>>id;
cout<<"enter salary:\t";
cin>>salary;
cout<<"enter name:\t";
xcin>>name;
}
void EMPLOYEE::put()
{
cout<<"\n**********************************************\n";
cout<<"\t\t\tID="<<id<<endl;
cout<<"\t\t\tSALARY="<<salary<<endl;
cout<<"\t\t\tNAME="<<name<<endl;
cout<<"\n**********************************************\n";
}
int main()
{
EMPLOYEE e[10];
int n,i;
cout<<"enter no of employee";
cin>>n;
for(i=0;i<n;i++)
e[i].get();
for(i=0;i<n;i++)
e[i].put();
return 0;
}
