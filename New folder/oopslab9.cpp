#include<iostream>
using namespace std;
class TIME
{
int hour,min,sec;
public:TIME()
{
hour=0;
min=0;
sec=0;
}
TIME(int a,int b,int c)
{
hour=a;
min=b;
sec=c;
}
friend TIME add(TIME,TIME);
void display()
{
cout<<"HH:MM:SS\n";
cout<<hour<<":"<<min<<":"<<sec<<"\n";
}
};
TIME add(TIME x,TIME y)
{
TIME z;
z.hour=x.hour+y.hour;
z.min=x.min+y.min;
z.sec=x.sec+y.sec;
z.min+=(z.sec)/60;
z.sec=(z.sec)%60;
z.hour+=(z.min)/60;
z.min=(z.min)%60;
return z;
}
int main()
{
TIME T1(5,60,60);
TIME T2(4,7,7);
TIME T3=add(T1,T2);
T1.display();
T2.display();
T3.display();
return 0;
}


