/* to find the greatest of a number */

#include<conio.h>
#include<iostream.h>

class num
  {
    private:
      int n;
    public:
      void read()
	{
	  cin>>n;
	}
      void disp()
	{
	  cout<<n;
	}
      num greater(num t2)
	{
	  if(n>t2.n)
	    return *this;
	  else
	    return t2;
	}
  };
void main()
  {
    num x,y,z;
    clrscr();
    cout<<"\nenter 2 numbers\n";
    x.read();
    y.read();
    z=x.greater(y);
    cout<<"\n\nOUTPUT\n";
    cout<<"\nthe greatest number is ";
    z.disp();
    getch();
  }