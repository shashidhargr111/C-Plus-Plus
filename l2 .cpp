#include<iostream>
using namespace std;
void exchange(int (&x)[10],int &m)
{
int i,j,temp;
for(i=0;i<m-1;i++)
for(j=i+1;j<m;j++)
if(x[j]<x[i])
{
temp=x[i];
x[i]=x[j];
x[j]=temp;
}
}
int main()
{
int a[10],n,i;
cout<<"Enter array size\n";
cin>>n;
cout<<"Enter array size\n";
for(i=0;i<n;i++)
cin>>a[i];
exchange(a,n);
cout<<"Sorted array is\n";
for(i=0;i<n;i++)
cout<<a[i]<<endl;
return 0;
}
