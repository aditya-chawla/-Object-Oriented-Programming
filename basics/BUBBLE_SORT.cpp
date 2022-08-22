#include<iostream.h>
#include<conio.h>
void bubblesort(int[],int);
void main()
{ clrscr();
int arr[50],a,n,index;
cout<<"enter the limit ";
cin>>n;
cout<<"\n enter the array ";
for(int i=0;i<n;i++)
cin>>arr[i];
bubblesort(arr,n);
cout<<"\n the sorted is shown below";
for(i=0;i<n;i++)
cout<<arr[i]<<" ";
getch();
}
void bubblesort(int arr[],int n)
{
int tmp,ctr=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<(n-i);j++)
{
if(arr[j]>arr[j+1])
{
tmp=arr[j];
arr[j]  =arr[j+1];
arr[j+1]=tmp;
}
}
cout<<"\n array after iteration  "<<++ctr<<"-is:";
for(int k=0;k<n;k++)
cout<<arr[k]<<" ";
cout<<endl;
}
}

