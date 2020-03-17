/* to create a pointer to an object for a class */

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
	  cout<<"\nenter the employee number & name\n";
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
    emp x,*p;
    p=&x;
    clrscr();
    p->read();
    p->disp();
    getch();
  }