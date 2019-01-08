#include<iostream>
using namespace std;
class MATRIX
{
public: 
int row,col;
int a[10][10];
void getmatrix()
 {
 int i,j;
 cout<<"Enter the row and colums\n";
 cin>>row>>col;
 cout<<"Enter the matrix\n";
 for(i=0;i<row;i++)
 for(j=0;j<col;j++)
 cin>>a[i][j];
 }
void putmatrix()
{
int i,j;
cout<<"The matrix is ___\n";
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
MAT operator *(MAT M2)
{
MAT M3;
int i,j,k;
if(col==M2.row)
{
M3.row=row;
M3.col=M2.col;
for(i=0;i<row;i++)
{
for(j=0;j<M2.col;j++)
{
M3.a[i][j]=0;
for(k=0;k<M2.row;k++)
M3.a[i][j]=M3.a[i][j]+a[i][k]*M2.a[k][j];
}
}
}
return M3;
}
};
int main()
{
MAT M1,M2,M3;
M1.getmatrix();
M2.getmatrix();
M3=M1*M2;
cout<<"1st matrixs\n";
M1.putmatrix();
cout<<"2nd matrixs\n";
M2.putmatrix();
cout<<"The result is\n";
M3.putmatrix();
return 0;
}
