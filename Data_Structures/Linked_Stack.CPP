#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int info;
node*next;
}*top,*newptr,*save,*ptr;
node*newnode(int);
void push(node*);
void display(node*);
void pop();
void main()
{ clrscr();
top=NULL;
int inf;
char ch='y';
while(ch=='y'||ch=='Y')
{
cout<<"\n enter new node " ;
cin>>inf;
newptr=newnode(inf);
if(newptr==NULL)
{
cout<<"\n cannot create new node ";
exit(1);
}
push(newptr);
cout<<"\n press Y to enter more nodes , N to exit ";
cin>>ch;
}
do
{
cout<<"\n the stack now is : \n ";
display(top);
cout<<"\n want to pop an element ? ";
cin>>ch;
if(ch=='y'||ch=='Y')
pop();
}
while(ch=='y'||ch=='Y');
}
node*newnode(int n)
{
ptr=new node;
ptr->info=n;
ptr->next=NULL;
return ptr ;
}
void push(node*np)
{
if(top==NULL)
top=np;
else
{
save=top;
top=np;
np->next=save;
}
}
void pop()
{
if(top==NULL)
cout<<"\n underfolw ";
else
{
ptr=top;
top=top->next;
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

