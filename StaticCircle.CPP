/* program to write data members & member functions */

#include<conio.h>
#include<iostream.h>

class circle
  {
    private:
      int r;
      float a;
      static float pi;
    public:
      static void assign()
	{
	  pi=3.142;
	}
      void read()
	{
	  cout<<"\nenter the radius value\n";
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
    circle::assign();
    circle x,y,z;
    clrscr();
    x.read();
    y.read();
    z.read();
    x.disp();
    y.disp();
    z.disp();
    getch();
  }