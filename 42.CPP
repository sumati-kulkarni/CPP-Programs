/* to find area of circle implimenting class */

#include<conio.h>
#include<iostream.h>

class circle
  {
    private:
      float r,area,pi;
      void calc()
	{
	  pi=3.142;
	  area=pi*r*r;
	}
    public:
      void read()
	{
	  cout<<"\nenter the value of radius\n";
	  cin>>r;
	  calc();
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\narea of circle = "<<area;
	}
  };
void main()
  {
    circle x;
    clrscr();
    x.read();
    x.disp();
    getch();
  }
