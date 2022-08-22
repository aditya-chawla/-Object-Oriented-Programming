#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class product
{
int code;
char item[20];
protected :
float qty;
public:
product()
{
qty=0;
code=0;
strcpy(item," ");
}
void getin()
{
cout<<" enter code : ";
cin>>code;
cout<<" enter item name : ";
gets(item);
cout<<" enter quantity  : ";
cin>>qty;
}
void show()
{
cout<<"the details of the item are : "  ;
cout<<"\n"<<code<<"\n"<<item<<"\n"<<qty;
}
};
class wholeseller
{
int wcode;
char manager[20];
public:
wholeseller()
{
wcode=0;
strcpy(manager," ");
}
void enter()
{
cout<<"\n enter the whole seller code : ";
cin>>wcode;
cout<<" \n enter the wholesale manager's name : ";
gets(manager);
}
void display()
{
cout<<"\n the wholeseller details are : "<<wcode<<" "<<manager;
}
};
class showroom:public product,public wholeseller
{
char name[20],city[20];
public:
showroom()
{
strcpy(name," ");
strcpy(city," ");
}
void input()
{
cout<<"\n enter name of showroom : ";
gets(name);
cout<<"\n enter city : ";
gets(city);
enter();
getin();
}
void view()
{
cout<<" the name of showroom , city , wholeseller , product details are : ";
cout<<"\n"<<name<<"\n"<<city<<"\n";
display();
cout<<"\n";
show();
}
}s;
void main()
{
clrscr();
s.input();
s.view();
getch();
}