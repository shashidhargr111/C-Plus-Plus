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
	cout<<hour<<":"<<min<<":"<<sec<<endl;
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
TIME t1(6,60,45),t2(3,40,45),t3=add(t1,t2);
cout<<"t1 time is\n";
t1.display();
cout<<"t2 time is\n";
t2.display();
cout<<"t3=t1+t2 is\n";
t3.display();
return 0;
}
