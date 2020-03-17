/* unary operator overloading implemented as member functions */

#include<conio.h>
#include<iostream.h>

class num
  {
    int a,b;
    public:
      void read()
	{
	  cout<<"\nenter two values\n";
	  cin>>a>>b;
	}
      void disp()
	{
	  cout<<"\nresult is\n";
	  cout<<a<<"\n"<<b;
	}
      num operator -()
	{
	  num tmp;
	  tmp.a=-a;
	  tmp.b=-b;
	  return tmp;
	}
      num neg();
  };
void main()
  {
    clrscr();
    cout<<"\nusing y=-x\n";
    num x,y;
    x.read();
    y=-x;
    y.disp();
    cout<<"\n\nusing y=x.neg()\n";
    x.read();
    y=x.neg();
    y.disp();
    getch();
  }
num num::neg()
  {
    num tmp;
    tmp.a=-a;
    tmp.b=-b;
    return tmp;
  }

