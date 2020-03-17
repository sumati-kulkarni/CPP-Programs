/* to create multiple objects of class */


#include<conio.h>
#include<iostream.h>

class emp
  {
    private:
      int eno;
      char na[20];
    public:
      void read()
	{
	  cout<<"\n\nenter the employee number & name\n";
	  cin>>eno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nemployee number = "<<eno<<"\nemployee name = "<<na;
	}
  };


void main()
  {
    emp x,y,z;
    clrscr();
    x.read();
    y.read();
    z.read();
    x.disp();
    y.disp();
    z.disp();
    getch();
  }