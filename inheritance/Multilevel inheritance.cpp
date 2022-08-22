#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class campus
{
long id;
char city[20];
public:
campus()
{
id=0;
strcpy(city," ");
}
void regst()
{
cout<<" \n enter campus id and city name : ";
cin>>id;
gets(city);
}
void display()
{
cout<<"\n the capus details are : ";
cout<<" \n" <<id<<"\n"<<city;
}
};
class dept : public campus
{
long dcode;
char name[20],hod[20];
public:
dept()
{
strcpy(name," ");
strcpy(hod," ");
dcode=0;
}
void enter()
{
cout<<"enter department code,name and head of department name : ";
cin>>dcode;
gets(name);
gets(hod);
regst();
}
void show()
{
cout<<"\n the details of department are : ";
cout<<"\n"<<dcode<<"\n"<<name<<"\n"<<hod;
display();
}
long rdc()
{return dcode;}

};
class faculty: public dept
{
int nfaculty;
public:
faculty()
{
nfaculty=50;
}
void calc()
{
r
dc();
nfaculty=rdc()+50;
}
void enroll()
{
enter();
}
void view()
{
show();
cout<<"\n the number of faculty is "<<"\n";
cout<<nfaculty;
}
}s;
void main()
{
clrscr();
s.enter();
s.view();
getch();
}

