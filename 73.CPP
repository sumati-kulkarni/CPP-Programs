/* binary operator overloading implemented as a member function */

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
	  cout<<"\n\nOUTPUT";
	  cout<<"\nsum = "<<r<<"+i"<<i;
	}
      complex operator +(complex t2)
	{
	  complex t;
	  t.r=r+t2.r;
	  t.i=i+t2.i;
	  return t;
	}
      complex add(complex);
  };
complex complex::add(complex t2)
  {
    complex t;
    t.r=r+t2.r;
    t.i=i+t2.i;
    return t;
  }
void main()
  {
    complex x,y,z;
    clrscr();
    x.read();
    y.read();
    cout<<"\nusing z=x+y";
    z=x+y;
    z.disp();
    cout<<"\n\n\nusing z=x.add(y)";
    z=x.add(y);
    z.disp();
    getch();
  }
