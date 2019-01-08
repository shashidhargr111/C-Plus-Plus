#include<iostream>
using namespace std;
ostream &form(ostream &output)
{
cout<<"$";
output.setf(ios::showpos);
output.setf(ios::showpoint);
output.fill('*');
output.precision(6);
output.width(10);
return output;
}
int main()
{
double n=7.42;
cout<<form<<n<<endl;
return 0;
}
