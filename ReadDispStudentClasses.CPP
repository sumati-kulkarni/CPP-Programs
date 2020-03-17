/* program to read & display student record implementing classes */

#include<iostream.h>
#include<conio.h>

class stud
  {
    private:
      int rno;
      char na[15];
    public:
      void read()
	{
	  cout<<"\nenter the roll number & name of a student\n";
	  cin>>rno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n\n";
	  cout<<"\nroll number : "<<rno;
	  cout<<"\n\nname : "<<na;
	}
  };
class marks:public stud
  {
    int m1,m2,total;
    public:
      void readm()
	{
	  read();
	  cout<<"enter the two subject marks of a student\n";
	  cin>>m1>>m2;
	  total=m1+m2;
	}
      void dispm()
	{
	  disp();
	  cout<<"\n\nmarks 1 : "<<m1;
	  cout<<"\n\nmarks 2 : "<<m2;
	  cout<<"\n\nTOTAL : "<<total;
	}
  };
void main()
  {
    marks x;
    clrscr();
    x.readm();
    x.dispm();
    getch();
  }
