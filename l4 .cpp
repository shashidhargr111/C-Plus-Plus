#include<iostream>
using namespace std;
class employee
{
int salary,id;
char name[20];
public:void get();
void put();
};

void employee::get()
{
cout<<"Enter name,id,salary\n";
cin>>name>>id>>salary;
cout<<"-----------------------\n";
}

void employee::put()
{
cout<<id<<"\t";
cout<<name<<"\t";
cout<<salary<<endl;
cout<<"-----------------------\n";
}

int main()
{
employee a[20];
int n,i;
cout<<"Enter no of employees\n";
cin>>n;
cout<<"-----------------------\n";
for(i=0;i<n;i++)
a[i].get();
cout<<"The employee details are\n";
cout<<"--------------------------\n";
cout<<"ID       NAME    SALARY\n";
for(i=0;i<n;i++)
a[i].put();
return 0;
}
