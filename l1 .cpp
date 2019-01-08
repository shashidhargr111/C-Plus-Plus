#include<iostream>
using namespace std;
inline int large(int x,int y,int z)
{
int a;
a=(x>y)?x:y;
a=(a>z)?a:z;
return a;
}
int main()
{
int x,y,z,large_no;
cout<<"Enter three numbers\n";
cin>>x>>y>>z;
large_no=large(x,y,z);
cout<<"Largest number="<<large_no<<endl;
return 0;
}
