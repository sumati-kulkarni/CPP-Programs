/* to create a single object of class */


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
	  cout<<"\nenter employee number & name\n";
	  cin>>eno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nemployee number = "<<eno<<"\nname = "<<na;
	}
  };


void main()
  {
    emp x;
    clrscr();
    x.read();
    x.disp();
    getch();
  }