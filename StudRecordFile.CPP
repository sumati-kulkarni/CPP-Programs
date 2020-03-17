#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class stud
  {
    int rno;
    char na[20];
    float per;
    public:
      void read()
	{
	  cout<<"\nenter the roll number, name & percentage\n";
	  cin>>rno>>na>>per;
	}
      void disp()
	{
	  cout<<rno<<na<<per;
	}
  };
void main()
  {
    stud x;
    ofstream fout("student.dat");
    char ch;
    clrscr();
    do
      {
	cout<<"\nenter student details\n";
	x.read();
	fout.write((char *)&x,sizeof(stud));
	cout<<"\nany more records? (y/n)\n";
	cin>>ch;
      }while(ch=='y');
    fout.close();
    ifstream fin("student.dat");
    while(!fin.eof())
      {
	fin.read((char *)&x,sizeof(stud));
	x.disp();
      }
    fin.close();
    getch();
  }
