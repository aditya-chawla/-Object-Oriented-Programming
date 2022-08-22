#include<iostream.h>
#include<conio.h>
int bsearch(int[],int,int) ;
void main()
{ clrscr();
int arr[50],a,index,n;
cout<<"enter the limit ";
cin>>n;
cout<<"\n enter the array";
for(int i=0;i<n;i++)
cin>>arr[i];
cout<<"\n enter the element to be searched ";
cin>>a;
index=bsearch(arr,n,a);
if(index==-1)
cout<<"\n element not found";
else
cout<<"\n element found at position "<<index+1<<endl;
getch();
}
int bsearch(int arr[],int n,int a)
{
int b=0,m,l=n-1;
while(b<=l)
{
m=(b+l)/2;
if(a==arr[m])
return m;
else
if(a>arr[m])
b
=m+1;
else
l=m-1;
}
return -1;
}
