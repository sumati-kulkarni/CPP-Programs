/* to specify other class member functios as friend functions of present
   class */

#include<conio.h>
#include<iostream.h>

class arithmetic;

class data
  {
    private : 
      int a,b,c;
    public:
      void read()
	{
	  cout<<"\nenter the integer values of a & b\n";
	  cin>>a>>b;
	}
      void disp()
	{
	  cout<<"\nanswer = "<<c;
	}
      friend void arithmetic::sum();
      friend void arithmetic::sub();
  };
class arithmetic
  {
    private:
      data x;
    public:
      void sum()
	{
	  x.read();
	  x.c=x.a+x.b;
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nfor addition\n";
	  x.disp();
	}
      void sub()
	{
	  x.read();
	  x.c=x.a-x.b;
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nfor substraction\n";
	  x.disp();
	}
  };
  
int main()
  {
    arithmetic y;
    y.sum();
    y.sub();
    getch();
    return 0;
  }
