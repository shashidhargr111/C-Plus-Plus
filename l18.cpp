#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
class phone
{
public:char name[10];
int ph_no;
void get()
{
cout<<"Enter name and phone number\n";
cin>>name>>ph_no;
}
void put()
{
cout.width(10);
cout.setf(ios::left,ios::adjustfield);
cout<<name<<"\t";
cout.width(10);
cout.setf(ios::right,ios::adjustfield);
cout<<ph_no<<endl;
}
};
int main()
{
int i,n;
phone ph;
ifstream infile;
ofstream outfile;
cout<<"Enter number of records\n";
cin>>n;
outfile.open("text.txt");

for(i=0;i<n;i++)
{
ph.get();
outfile<<ph.name<<"\t"<<ph.ph_no<<"\n";
}
outfile.close();
infile.open("text.txt");
cout<<"NAME\t\tPH_NO\n";
for(i=0;i<n;i++)
{
infile>>ph.name>>ph.ph_no;
ph.put();
}
infile.close();
return 0;
}
