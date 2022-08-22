#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
int insert(int[],int);
void display(int[],int,int);
int del(int cq[]);
const int size =7;
int cq[size],front =-1,rear=-1;
void main()
{ clrscr();
int item,res,ch;
do
{
cout<<"\n circular queue menue ";
cout<<"\n 1. insert "<<"\n 2. delete"<<"\n 3. display"<<"\n 4. exit";
cout<<"\n enter your choice ";
cin>>ch;
switch(ch)
{
case 1:cout<<"\n enter item for insertion : ";
       cin>>item;
       res=insert(cq,item);
       if(res==-1)
       cout<<"\n overflow";
       else
       {
       cout<<"\n updated circular queue is ";
       display(cq,front,rear);
       }
       break;
case 2: item=del(cq);
	cout<<"\n element deleted is :"<<item;
	display(cq,front,rear);
	break;
case 3: display(cq,front,rear);
	break;
case 4: break;
default: cout<<" \n wrong choice ";
	 break;
	 }
	 }
	 while(ch!=4);
	 getch() ;
	 }
int insert(int cq[],int ele)
{
if((front==0&&rear==size-1)||(front==rear+1))
  return -1;
  else
  if(rear==-1)
  front=rear=0;
  else
  if(rear==size-1)
  rear=0;
  else
  rear++;
  cq[rear]=ele;
  return 0;
  }
void display(int cq[],int front,int rear)
{
int i=0;
cout<<"\n updated circular queue is";
if(front==-1)
return;
if(rear>=front)
{
for(i=0;i<front;i++)
cout<<"\n -";
cout<<"\n>>>";
for(i=front ;i<rear;i++)
cout<<cq[i]<<"<-";
cout<<cq[rear]<<"<<<"<<endl;
}
else
{
for(i=0;i<rear;i++)
cout<<cq[rear]<<"<<";
for(;i<front;i++)
cout<<"-";
cout<<">>>";
for(i=front;i<size;i++)
cout<<cq[i]<<"<-";
}
}
int del(int cq[])
{
int ret;
if(front==-1)
return -1;
else
{
ret=cq[front];
if(front==rear)
front=rear=-1;
else
if(front==size-1)
 front=0;
 else
 front++;
 }
 return ret;
 }


