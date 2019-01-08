#include<iostream>
#include<fstream>
using namespace std;
int main(int argc,char *argv[])
{
char ch;
int count=0;
ifstream infile;
if(argc<=1)
cout<<"No arguments\n";
else
{
infile.open(argv[1]);
while(!infile.eof())
{
infile.read((char *)&ch,sizeof(ch));
count++;
}
infile.close();
cout<<"The number of charectors in the given file is="<<count<<endl;
}
return 0;
}
