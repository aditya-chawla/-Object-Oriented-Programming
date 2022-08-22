#include<iostream.h>
#include<conio.h>
#include<string.h>
class travel
{
char code[5];
int nadults,nchild,distance;
float total;
public:
travel()
{
strcpy(code,"null") ;
nadults=0;
nchild=0;
distance=0;
total=0;
}
void assign()
{
float fare=0;
if(distance>=0)
fare=nadults*500+nchild*250;
else
if(distance>=500)
fare=nadults*300+nchild*150;
else
fare=nadults*200+nchild*100;
total=fare;
}
void entertravel()
{
cout<<"enter the value of travel code \n";
cin>>code;
cout<<" enter number of adults\n ";
cin>>nadults;
cout<<"enter the number of children \n";
cin>>nchild;
cout<<"enter distance \n";
cin>>distance;
assign();
}
void show()
{
cout<<"travel code : "<<code<<"\n";
cout<<"no of adults : "<<nadults<<"\n";
cout<<"no of children : "<<nchild<<"\n";
cout<<"distance : "<<distance<<"\n";
cout<<"total fare : "<<total<<"\n";
}
}t;
void main()
{
clrscr();
t.entertravel();
t.show();
getch();
}