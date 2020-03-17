/* to write outline member functions */

#include<conio.h>
#include<iostream.h>

class complex
  {
    private:
      int r,i;
    public:
      void read()
	{
	  cout<<"\nenter complex values\n";
	  cin>>r>>i;
	}
      void disp();
  };


void complex::disp()
  {
    cout<<"\n\nOUTPUT\n";
    cout<<"\n"<<r<<"+i"<<i;
  }

void main()
  {
    complex x;
    clrscr();
    x.read();
    x.disp();
    getch();
  }
