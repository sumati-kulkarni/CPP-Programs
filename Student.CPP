#include<iostream.h>
#include<conio.h>
#include<fstream.h>


class student
  {
    private:
      int rno;
      char na[20];
    public:
      void read()
	{
	  cout<<"\nEnter the roll number & name of a student";
	  cin>>rno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nRoll Number : "<<rno;
	  cout<<"\nName : "<<na;
	}
  };
void main()
  {
    clrscr();
    student x;
    fstream frd;
    frd.open("student.DAT",ios::in);
    while(!frd.eof())
      {
	frd.read((char *)&x,sizeof(student));
	x.disp();
	if(!frd.eof())
	  {
	     frd.seekg(sizeof(student),ios::cur);
	  }
      }
    frd.close();
    getch();
  }
