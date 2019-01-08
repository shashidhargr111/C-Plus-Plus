#include<iostream>
using namespace std;
class DISTANCE
{
int feet,inches;
public:void getdata();
void putdata();
DISTANCE add(DISTANCE);
};
void DISTANCE::getdata()
{
cout<<"enter feet and inches                                                                                                                                                                                                                                                                                                                                               ";
cin>>feet>>inches;
}
void DISTANCE::putdata()
{
cout<<"FEET="<<feet;
cout<<"INCHES="<<inches;
}
DISTANCE DISTANCE::add(DISTANCE d)
{
DISTANCE d3;
d3.feet=d.feet+feet;
d3.inches=d.inches+inches;
d3.feet=d3.inches/12+d3.feet;
d3.inches=d3.inches%12;
return d3;
}
int main()
{
DISTANCE D1,D2,D3;
D1.getdata();
D2.getdata();
D3= D2.add(D1);
cout<<"\n d1 distance:\n";
D1.putdata();
cout<<"\n d2 distance:\n";
D2.putdata();
cout<<"\n d3 distance\n";
D3.putdata();
return 0;
}


