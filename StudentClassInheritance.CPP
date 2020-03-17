/* program to display result of a student */

#include<iostream.h>
#include<conio.h>

class stud
  {
    int rno;
    char na[15];
    public:
      void read()
	{
	  cout<<"\n\nenter the roll number & name of a student\n";
	  cin>>rno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nroll number : "<<rno;
	  cout<<"\n\nname        : "<<na;
	}
  };
class marks:public stud
  {
    protected:
      int m1,m2;
    public:
      void read()
	{
	  stud::read();
	  cout<<"\n\nenter two subject marks\n";
	  cin>>m1>>m2;
	}
      void disp()
	{
	  stud::disp();
	  cout<<"\n\nmarks 1     : "<<m1;
	  cout<<"\n\nmarks 2     : "<<m2;
	}
  };
class result:public marks
  {
    float total,per;
    public:
      void read()
	{
	  marks::read();
	  total=m1+m2;
	  per=(total/200)*100;
	}
      void disp()
	{
	  marks::disp();
	  cout<<"\n\ntotal       : "<<total;
	  cout<<"\n\npercentage  : "<<per;
	}
  };
void main()
  {
    result x;
    clrscr();
    x.read();
    x.disp();
    getch();
  }