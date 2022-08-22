#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int info;
node*next;
}*front,*newptr,*save,*ptr,*rear;
node*newnode(int);
void insert(node*);
void display(node*);
void delnode();
void main()
{ clrscr();
front =rear=NULL;
int inf;
char ch='y';
while(ch=='y'||ch=='y')
{
cout<<"\n enter new node ";
cin>>inf;
newptr=newnode(inf);
if(newptr==NULL)
{
cout<<"\n cannot create new node \n ";
exit(1);
}
insert(newptr);
cout<<"\n press Y to enter more node , N to exit ";
cin>>ch;
}
do
{
cout<<"\n the linked queue now is : ";
display(front);
cout<<"\n want to delete first node ? ";
cin>>ch;
if(ch=='y'||ch=='Y')
delnode();
}
while(ch=='y'||ch=='Y');
getch();

}
node*newnode(int n)
{
ptr=new node ;
ptr->info=n;
ptr->next=NULL;
return ptr;
}
void insert(node*np)
{
if(front==NULL)
{
front=rear=np;
}
else
{
rear->next=np;
rear=np;
}
}
void delnode()
{
if(front==NULL)
cout<<" UNDERFLOW \n "  ;
else
{
ptr=front ;
front=front->next;
delete ptr;
}
}
void display(node*np)
{
while(np!=NULL)
{
cout<<np->info<<"->";
np=np->next;
}
}