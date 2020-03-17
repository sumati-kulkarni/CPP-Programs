/* unary operator overloading implemented as non-member functions */

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
      friend num operator -(num);
      friend num neg(num);
  };
void main()
  {
    clrscr();
    cout<<"\nusing y=-x\n";
    num x,y;
    x.read();
    y=-x;
    y.disp();
    cout<<"\n\nusing y=neg(x)\n";
    x.read();
    y=neg(x);
    y.disp();
    getch();
  }
num neg(num t)
  {
    t.a=-t.a;
    t.b=-t.b;
    return t;
  }
num operator -(num t)
  {
    t.a=-t.a;
    t.b=-t.b;
    return t;
  }