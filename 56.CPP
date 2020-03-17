/* program to represent static date members */

#include<conio.h>
#include<iostream.h>

class circle
  {
    private:
      int r;
      float a;
      static float pi;
    public:
      void assign()
	{
	  r=a=0;
	  pi=3.142;
	}
      void read()
	{
	  cout<<"\n enter the radius\n";
	  cin>>r;
	  a=pi*r*r;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\narea="<<a;
	}
  };
float circle::pi;
void main()
  {
    circle x,y,z;
    clrscr();
    x.assign();
    y.assign();
    z.assign();
    x.read();
    y.read();
    z.read();
    x.disp();
    y.disp();
    z.disp();
    getch();
  }