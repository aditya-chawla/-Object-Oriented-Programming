#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
int el;
node*next;
}*top,*np,*ptr,*save,*newptr;
node*create(int n)
{
ptr=new node;
ptr->el=n;
ptr->next=NULL;
return ptr;
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
}}
void pop()
{
if(top==NULL)
cout<<"\n underflow";
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
cout<<np->el<<"->";
np=np->next;
}
}
void main()
{
clrscr();
top= NULL;
int i,n;
char ch;
do
{
cout<<"\n enter your choice: ";
cout<<"\n 1.push"<<"\n 2.pop"<<"\n 3.display"<<"\n 4.exit";
cin>>i;
if(i==1)
{
cout<<" \n enter elemrnt to be inserted ";
cin>>n;
newptr=create(n);
if(newptr==NULL)
cout<<"\n error";
push(newptr);
cout<<"\n now the stack is ";
display(top);
}
else
if(i==2)
{
pop();
cout<<"\n now the stack is ";
display(top);
}
else
if(i==3)
{
cout<<"\n the stack now is";
display(top);
}
cout<<"\n do you want to continue ";
cin>>ch;
}while(ch=='y'||ch=='Y');
getch();
}

