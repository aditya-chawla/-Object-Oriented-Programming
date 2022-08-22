#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class bank
{
char location[20];
float budget ,income;
public:
bank()
{
strcpy(location," ");
budget=0;
income=0;
}
void detail()
{
cout<<" enter the location of bank ";
gets(location);
cout<<"\n enter the budget and income : ";
 cin>>budget>>income;
}
void show()
{
cout<<location<<"\t" << budget<< "\t"<<income;
}
};

class employee : public bank
{
char branch[20];
int nemployee;
public:
employee()
{
strcpy(branch," ");
nemployee=0;
}
void d()
{
cout<<"enter the branch name : ";
gets(branch);
cout<<"enter the number of employee";
cin>>nemployee;
detail();
}
void output()
{
cout<<" the details are : ";
cout<<'\n'<<branch<<'\n';

show();
cout<<" the number of employee are "<<nemployee;
}
}s;
void main()
{
 clrscr();
s.d();
s.output();
getch();
}