/* to overload binary operator '+' using the example of adding two complex
   numbers */

#include<conio.h>
#include<iostream.h>

class complex
  {
    private:
      int r,i;
    public:
      void read()
	{
	  cout<<"\nenter the two complex numbers\n";
	  cin>>r>>i;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nsum="<<r<<"+i"<<i;
	}
      complex operator +(complex &t2)
	{
	  cout<<"\n\nusing member function for z=x+y";
	  complex t;
	  t.r=r+t2.r;
	  t.i=r+t2.i;
	  return t;
	}
      complex operator +(int tr)
	{
	  cout<<"\n\nusing member function for z=x+5";
	  complex t;
	  t.r=r+tr;
	  t.i=i;
	  return t;
	}
      friend complex operator +(int,complex);
  };
complex operator +(int tr,complex t2)
  {
    cout<<"\n\nusing non member function for z=+(5,y)";
    complex t;
    t.r=tr+t2.r;
    t.i=t2.i;
    return t;
  }
void main()
  {
    complex x,y,z;
    clrscr();
    x.read();
    y.read();
    z=x+y;
    z.disp();
    z=x+5;
    z.disp();
    z=5+y;
    z.disp();
    getch();
  }