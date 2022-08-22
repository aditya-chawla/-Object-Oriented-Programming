#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class student
{
int rno;
char name[20],grade;
float marks ;
public:

void read()
{
cout<<"\n enter roll no";
cin>>rno;
cout<<"\n enter name :";
gets(name);
cout<<"\n enter marks:";
cin>>marks;
}
student()
{
}
void display()
{
calcgrade();
cout<<"roll no"<<rno<<endl;
cout<<"name"<<name<<endl;
cout<<"grade"<<grade<<endl;
}
int getrollno()
{
return rno;
}
float getmarks()
{
return marks ;
}
void calcgrade()
{
if(marks>=75)
grade='A';
else
if(marks>=50)
grade='B';
else
grade='c';
}
};
void main()
{
clrscr();
student XIIA[5];
for(int i=0;i<5;i++)
{
cout<<"\n enter the details of student "<<i+1<<":";
XIIA[i].read();
}
int x,rollno,pos=-1,hm=0;
do
{
cout<<"\n 1. specific student ";
cout<<"\n 2. topper";
cout<<"\n 3. exit";
cout<<"\n enter your choice";
cin>>x;
switch(x)
{
case 1: cout<<"\n enter roll no of student whose details you want to see";
cin>>rollno;
for(i=0;i<5;i++)
{
if(XIIA[i].getrollno()==rollno)
{
XIIA[i].display();
break;
}
}
case 2:for(i=0;i<5;i++)
{
if(XIIA[i].getmarks()>hm)
{pos=i;
hm=XIIA[i].getmarks();
}
}
XIIA[pos].display();
break;
case 3: break;
default : cout<<"\n wrong choice";
break;
}
}
while(x>=1&&x<3);
getch();
}

