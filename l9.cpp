#include<iostream>
#include<string.h>
using namespace std;
class STRING
{
char *p;
int len;
public:STRING()
	{
	}
STRING(char *a)
{
len=strlen(a);
p=new char[len+1];
strcpy(p,a);
}
friend int operator ==(STRING,STRING);
};
int operator ==(STRING x,STRING y)
{
if(strcmp(x.p,y.p)==0)
	return 1;
else
	return 0;
}
int main()
{
STRING s1,s2;
char str1[10],str2[10];
cout<<"Enter 1st string\n";
cin>>str1;
cout<<"Enter 2nd string\n";
cin>>str2;
s1=str1;
s2=str2;
if(s1==s2)
cout<<"Strings are equal\n";
else
cout<<"Strings are not equal\n";
return 0;
}
