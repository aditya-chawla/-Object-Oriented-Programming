#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class candidate
{
long rno;
char name[30],remarks[20];
float score;
void assign()
{
if(score>=75)
strcpy(remarks,"selected");
else
strcpy(remarks,"not selected");
}
public:
candidate()
{
rno=0;
strcpy(name," ");
score=0;
strcpy(remarks,"did not participate");
}
void enter()
{
cout<<"enter registration number : ";
cin>>rno;
cout<<" \n enter name : ";
gets(name);
cout<<"\n enter score:";
cin>>score;
assign();
}
void display()
{
cout<<" registration number : "<<rno<<"\n";
cout<<" name : "<<name<<endl;
cout<<" score : "<<score<<endl;
cout<<" remarks : "<<remarks <<endl;
}
}c;
void main()
{
clrscr();
c.enter();
c.display();
getch();
}