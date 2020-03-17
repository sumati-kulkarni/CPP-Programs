/* to create array of objects for a class */



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
	  cin>>eno>>na;
	}
      void disp()
	{
	  cout<<"\n "<<eno<<" \t"<<na;
	}
  };


void main()
  {
    emp x[10];
    clrscr();
    cout<<"\nenter 10 employee records with employee number & name\n";
    for(int i=0;i<10;i++)
      x[i].read();
    cout<<"\n\nOUTPUT\n";
    cout<<"\neno\t name\n";
    for(i=0;i<10;i++)
      x[i].disp();
    getch();
  }