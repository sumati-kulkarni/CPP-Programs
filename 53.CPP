/* to write friend functions */


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
      friend void disp(complex);
  };


void disp(complex t)
  {
    cout<<"\n\nOUTPUT\n";
    cout<<"\n"<<t.r<<"+i"<<t.i;
  }

void main()
  {
    complex x;
    clrscr();
    x.read();
    disp(x);
    getch();
  }
