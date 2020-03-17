/*to find the sum of two complex numbers implimenting class */


#include<conio.h>
#include<iostream.h>

class complex
  {
    private:
      int r,i;
    public:
      void read()
	{
	  cin>>r>>i;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\n\nsum = "<<r<<"+i"<<i;
	}
      void calc(complex x,complex y)
	{
	  r=x.r+y.r;
	  i=x.i+y.i;
	}
  };

void main()
  {
    complex x,y,z;
    clrscr();
    cout<<"\nenter complex values of x\n";
    x.read();
    cout<<"\nenter complex values of y\n";
    y.read();
    z.calc(x,y);
    z.disp();
    getch();
  }

