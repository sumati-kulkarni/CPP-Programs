#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
  {
    clrscr();
    fstream fio;
    char fnm[20],ch;
    cout<<"\nEnter the filename\n";
    cin>>fnm;
    fio.open(fnm,ios::out);
    cout<<"\nEnter the file contents\n";
    do
      {
	ch=getche();
	fio<<ch;
      }while(ch!='\x1A');
    fio.close();
    fio.open(fnm,ios::in);
    cout<<"\nFile contents are : \n";
    while(!fio.eof())
      {
	fio>>ch;
	cout<<ch;
      }
    fio.close();
    getch();
  }
