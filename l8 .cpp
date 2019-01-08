#include<iostream>
int flag=0;
using namespace std;
class MATRIX
{
int row,col,a[10][10];
public:void read()
{
int i,j;
cout<<"Enter row and column size\n";
cin>>row>>col;
cout<<"Enter the matrix\n";
for(i=0;i<row;i++)
for(j=0;j<col;j++)
cin>>a[i][j];
}
void print()
{
int i,j;
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
cout<<a[i][j]<<"\t";
cout<<endl;
}
}
MATRIX operator +(MATRIX m)
{
int i,j;
MATRIX c;
if(row==m.row && col==m.col)
{
c.row=row;
c.col=col;
for(i=0;i<row;i++)
for(j=0;j<col;j++)
c.a[i][j]=a[i][j]+m.a[i][j];
return c;
}
else
{
flag=1;
}
}
};
int main()
{
MATRIX a,b,c;
a.read();
b.read();
c=a+b;
if(flag==0)
{
cout<<"Matrix 1 is......\n";
a.print();
cout<<"Matrix 2 is......\n";
b.print();
cout<<"Result of adding two matries is...\n";
c.print();
}
else
{
cout<<"Matrix multiplication is not possible.........\n";
}
return 0;
}
