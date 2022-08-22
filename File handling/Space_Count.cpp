#include<fstream.h>
#include<iostream.h>
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
cout<"\n file not existing ";
exit(0);
}
while(!ifile.eof())
{
ifile.get(ch);
{
if(ch==' ')
count++;
}
}
cout<<"\n the number of spaces in the file are "<<endl<<count;
ifile.close();
getch() ;
}
