/*  program of complex numbers implementing constructors & destructors  */


#include<conio.h>
#include<iostream.h>

class complex
  {
    int r,i;
    public:
      complex()
	{
	  r=i=0;
	  cout<<"\n\nDEFAULT CONSTRUCTOR\n";
	  cout<<r<<"+i"<<i;
	}
      complex(int tr)
	{
	  r=tr;
	  i=0;
	  cout<<"\n\nPARAMETERIZED CONSTRUCTOR\n";
	  cout<<r<<"+i"<<i;
	}
      complex(int tr,int ti)
	{
	  r=tr;
	  i=ti;
	  cout<<"\n\nPARAMETERIZED CONSTRUCTOR\n";
	  cout<<r<<"+i"<<i;
	}
      complex(complex &t)
	{
	  r=t.r;
	  i=t.i;
	  cout<<"\n\nCOPY CONSTRUCTOR\n";
	  cout<<r<<"+i"<<i;
	}
  };
int main()
  {
    complex x;
    complex y(5);
    complex z(5,8);
    complex z1=z;
    getch();
    return 0;
  }
