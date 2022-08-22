#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<process.h>
void main()
{
clrscr();
char ch;
int count=0;
ifstream ifile;
ifile.open("book.txt");
if(!ifile)
{
cout<<"\n file doesnot exist ";
exit(0);
}
while(!ifile.eof())
{
ifile.get(ch);
if(ch==' '||ch=='.')
count++;
}
cout<<"\n the number of words = "<<count;
ifile.close();
getch();
}
