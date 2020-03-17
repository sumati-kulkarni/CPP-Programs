/* creating objects dynamically for a class */


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
    emp *p;
    clrscr();
    p=new emp;
    p->read();
    p->disp();
    delete p;
    getch();
  }