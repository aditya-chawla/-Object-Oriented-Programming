#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char ch[20];

fstream ifile;
ifile.open("book.txt",ios::in);
int count=0;
while(!ifile.eof())
{
ifile>>ch;
if(strcmp(ch,"to")==0)
count++;
}
ifile.close();
cout<<"\n count of -to- in the file is " <<endl<<count;
getch();
}
