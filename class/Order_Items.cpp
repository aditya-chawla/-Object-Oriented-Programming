#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class item
{
int itemcode[5];
float price[5];
public:
void initialize();
float largest();
float sum();
void display();
item()
{
}
};
void item::initialize()
{
for(int i=0;i<5;i++)
{
cout<<"\n"<<"item no:"<<(i+1);
cout<<"\n"<<"enter item code:";
cin>>itemcode[i];
cout<<"\n"<<"enter item price ";
cin>>price[i];
cout<<"\n";
}
}
float item::largest()
{
float large=price[0];
for(int i=1;i<5;i++)
{
if(large<price[i])
large=price[i];
}
return large;
}
float item::sum()
{
float sum=0;
for(int i=0;i<5;i++)
{
sum+=price[i];
}
return sum;
}
void item::display()
{
cout<<"\n code price ";
for(int i=0;i<5;i++)
{
cout<<"\n"<<itemcode[i];
cout<<" "<<price[i];
}
cout<<"\n";
}

void main()
{ clrscr();
item order;
order.initialize();
float total ,biggest ;
int x=0;
do
{
cout<<"\n 1. display largest price ";
cout<<"\n 2. display sum of prices ";
cout<<"\n 3. display item list ";
cout<<"\n enter your choice ";
cin>>x;
switch(x)
{
case 1:biggest=order.largest();
cout<<"the largest price is "<<biggest<<"\n";
break;
case 2:total=order.sum();
cout<<"the sum of prices is "<<total<<"\n";
break;
case 3:order.display();
break;
default:cout<<"\n wrong choice ";
break;
}
}
while(x>=1&&x<=3);
getch();
}


