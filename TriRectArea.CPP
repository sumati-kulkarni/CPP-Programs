/* to calculate area of triangle & rectangle */

#include<iostream.h>
#include<conio.h>


class fig
  {
    protected:
      float d1,d2;
    public:
      void read()
	{
	  cout<<"\n\n\n\n\nenter the two dimentions\n";
	  cin>>d1>>d2;
	}
      void disp()
	{
	  cout<<"\n\n\tOUTPUT\n";
	  cout<<"\ndimension 1 : "<<d1;
	  cout<<"\n\ndimension 2 : "<<d2;
	}
  };
class rect:public fig
  {
    float area;
    public:
      void read()
	{
	  fig::read();
	  area=d1*d2;
	}
      void disp()
	{
	  fig::disp();
	  cout<<"\n\narea of rectangle : "<<area;
	}
  };
class tri:public fig
  {
    float area;
    public:
      void read()
	{
	  area=1;
	  fig::read();
	  area=(.5)*d1*d2;
	}
      void disp()
	{
	  fig::disp();
	  cout<<"\n\narea of triangle : "<<area;
	}
  };
void main()
  {
    tri x;
    rect y;
    clrscr();
    x.read();
    x.disp();
    y.read();
    y.disp();
    getch();
  }
