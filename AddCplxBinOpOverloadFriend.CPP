/* program to add complex numbers more than two complex objects */

#include<conio.h>
#include<iostream.h>

class complex
  {
    private:
      int r,i;
    public:
      void read()
	{
	  cout<<"\nenter two complex numbers\n";
	  cin>>r>>i;
	}
      void disp()
	{
	  cout<<"\nOUTPUT";
	  cout<<"\nsum = "<<r<<" +i "<<i<<"\n\n\n";
	}
      complex operator +(complex &t2)
	{
	  cout<<"\nusing member function with complex as parameter";
	  complex t;
	  t.r=r+t2.r;
	  t.i=i+t2.i;
	  return t;
	}
      complex operator +(int tr)
	{
	  cout<<"\nusing member function with r as parameter";
	  complex t;
	  t.r=r+tr;
	  t.i=i;
	  return t;
	}
      friend complex operator +(int,complex);
  };
complex operator +(int tr,complex t2)
  {
    cout<<"\nusing non member function";
    complex t;
    t.r=tr+t2.r;
    t.i=t2.i;
    return t;
  }
void main()
  {
    complex a,b,c,d;
    clrscr();
    a.read();
    b.read();
    c.read();
    d=a+b+c;
    d.disp();
    d=a+5+3+b;
    d.disp();
    d=2+a+b+3;
    d.disp();
    d=2+3+4+a+b;
    d.disp();
    getch();
  }