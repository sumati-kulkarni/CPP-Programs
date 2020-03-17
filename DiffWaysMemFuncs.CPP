/* different ways of writing member functions */

#include<conio.h>
#include<iostream.h>

class complex
  {
    private:
      int r,i;
    public:
      void read()
	{
	  cout<<"\n\nenter the values of complex number\n";
	  cin>>r>>i;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\n"<<r<<"+i"<<i;
	}
      void assign()
	{
	  r=i=0;
	}
      void assign(int tr)
	{
	  r=tr;
	  i=0;
	}
      void assign(int tr,int ti)
	{
	  r=tr;
	  i=ti;
	}
      void assign(complex t)
	{
	  r=t.r;
	  i=t.i;
	}
      void add(complex &t1,complex &t2)
	{
	  r=t1.r+t2.r;
	  i=t1.i+t2.i;
	}
      complex add(complex &t2)
	{
	  complex tmp;
	  tmp.r=r+t2.r;
	  tmp.i=i+t2.i;
	  return tmp;
	}
  };
void main()
  {
    complex x,y,z;
    clrscr();
    x.assign();
    y.assign(5);
    z.assign(5,3);
    cout<<"\n\nfor default menber functions\n";
    x.disp();
    cout<<"\n\nfor parameterized functions passing 1 parameter\n";
    y.disp();
    cout<<"\n\nfor parameterized functions passing 2 parameter\n";
    z.disp();
    y.assign(x);
    cout<<"\n\nfor copy member functions\n";
    y.disp();
    x.read();
    y.read();
    z=x.add(y);
    cout<<"\n\nafter reading values\n";
    z.disp();
    getch();
  }



