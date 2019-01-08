#include<iostream>
int flag=0;
using namespace std;
class MATRIX
{
public:
int row,col,a[10][10];
	void getmat()
	{
	int i,j;
	cout<<"Enter row & column size\n";
	cin>>row>>col;
	cout<<"Enter the matix\n";
	for(i=0;i<row;i++)
	for(j=0;j<col;j++)
		cin>>a[i][j];
	}

	void putmat()
	{
	int i,j;
        for(i=0;i<row;i++)
	{
        for(j=0;j<col;j++)                
			cout<<a[i][j]<<"\t";
			cout<<endl;
	}
	}
};


class MAT:public MATRIX
{
public:
MAT operator *(MAT m2)
{
int i,j,k;
MAT m3;
if(col==m2.row)
{
m3.row=row;
m3.col=m2.col;
for(i=0;i<row;i++)
for(j=0;j<m2.col;j++)
{
m3.a[i][j]=0;
for(k=0;k<m2.row;k++)
m3.a[i][j]=m3.a[i][j]+a[i][k]*m2.a[k][j];
}
}
else
flag=1;
return m3;
}
};

int main()
{
MAT m1,m2,m3;
m1.getmat();
m2.getmat();
m3=m1*m2;
if(flag==0)
{
cout<<"The 1st matrix is .......\n";
m1.putmat();
cout<<"The 2nd matrix is .......\n";
m2.putmat();
cout<<"The resultant matrix is .......\n";
m3.putmat();
return 0;
}
else
cout<<"Matix multiplication can't be possible\n";
}
