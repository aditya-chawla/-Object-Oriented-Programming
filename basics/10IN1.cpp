#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int sum(int a,int b)
{int c;
c=a+b;
return c;
}
int subtract(int x,int y)
{ int z;
z=x-y;
return z;
}
int product(int p,int q)
{ int r;
r=p*q;
return r;
}
int power(int j,int k)
{int l;
l=pow(j,k);
return l;
}
int greater(int a,int b)
{ if(a>b)
return a;
else
return b;
}
int equality(int c,int d)
{
if(c==d)
return 0;
else
return 1;
}
void fabonaci(int n)
{ int a,b,c;
a=0;
b=1;
cout<<a<<" "<<b;
for(int i=2;i<n;i++)
{
c=a+b;
cout<<" "<<c;
a=b;
b=c;
}
}
void linear(int a[10])
{ int m,found,pos=0;
cout<<"enter the element to be searched ";
cin>>m;
for(int i=0;i<10;i++)
{
if(a[i]==m)
{ found=1;
 pos=i;
 }
else
found=0;
}
if(found==1)
cout<<"element found at positon"<<pos+1;
else
cout<<"element not found ";
}
void larsmal(int a[10])
{
int b=a[1];
for(int i=0;i<10;i++)
{ if(a[i]>b)
a[i]=b;
}
cout<<"the largest element is"<<b;
}
void diag(int a[3][3])
{
int sum=0,i,j;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
sum+=a[i][j];
}
}
cout<<"the diagonal sum is "<<sum;
}
void main()
{
clrscr();
int n,a,b,l,arr[10],mat[3][3],i,j;
cout<<"menue";
cout<<" \n 1) sum of two numbers"
    <<" \n 2) diffrence of two numbers"
    <<" \n 3) product of two numbers "
    <<" \n 4) power of a number"
    <<" \n 5) greater of the two numbers "
    <<" \n 6) to check the equality of two numbers "
    <<" \n 7) to print fabonaci series "
    <<" \n 8) linear search in 1D array"
    <<" \n 9) largest element in an array"
    <<" \n 10) diagonal sum of a matrix"
    <<" \n enter your choice ";
cin>>n;
switch(n)
{
case 1:cout<<"enter two numbers ";
	cin>>a>>b;
	cout<<"their sum is"<<sum(a,b);
	break;
case 2:cout<<"enter two numbers " ;
       cin>>a>>b;
       cout<<"their difference is "<<subtract(a,b);
       break;
case 3:cout<<"enter two numbers ";
       cin>>a>>b;
       cout<<"their product is "<<product(a,b);
       break;
case 4:cout<<"enter the number and its power ";
       cin>>a>>b;
       cout<<"the result is "<<power(a,b);
       break;
case 5:cout<<"enter two numbers ";
       cin>>a>>b;
       cout<<"the greater of the two numbers is "<<greater(a,b);
       break;
case 6:cout<<"enter two numbers ";
       cin>>a>>b;
       l=equality(a,b);
       if(l==0)
       cout<<"the numbers are equal";
       else
       cout<<"the numbers are not equal";
       break;
case 7:cout<<"enter the limit of fabonaci series ";
       cin>>n;
       fabonaci(n);
       break;
case 8:cout<<"enter the array ";
       for(i=0;i<10;i++)
       cin>>arr[10];
       linear(arr);
       break;
case 9:cout<<"enter the array ";
       for(i=0;i<10;i++)
       cin>>arr[i];
       larsmal(arr);
       break;
case 10:cout<<"enter the matrix";
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	cin>>mat[i][j];
	diag(mat);
	break;
default :cout<<"wrong input";
	 break;
}
getch();
}