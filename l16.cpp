#include<iostream>
#include<fstream>
using namespace std;
int main()
{
int n,i;
char name[10],code[10];
double cost;
//cout<<"Enter the number of items\n";
//cin>>n;
ofstream outfile("text.txt");
//for(i=0;i<n;i++)
//{
cout<<"Enter the ITEM code,name & cost\n";
cin>>code>>name>>cost;
outfile<<code<<"\t";
outfile<<name<<"\t";
outfile<<cost<<"\n";
//}
outfile.close();

ifstream infile("text.txt");
cout<<"The items details are\n";
cout<<"CODE"<<"\t"<<"NAME"<<"\t"<<"COST"<<"\n";
//for(i=0;i<n;i++)
//{
infile>>code>>name>>cost;
cout<<code<<"\t"<<name<<"\t"<<cost<<"\n";
//}
infile.close();
return 0;
}
