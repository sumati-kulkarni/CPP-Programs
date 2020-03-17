

#include<iostream.h>
#include<conio.h>

class fig
  {
    protected:
      int d1,d2;
    public:
      fig()
	{
	  d1=d2=0;
	}
      fig(int t1,int t2)
	{
	  d1=t1;
	  d2=t2;
	}
      void read()
	{
	  cout<<"\n\nenter the two dimentions\n";
	  cin>>d1>>d2;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\ndimension 1 = "<<d1;
	  cout<<"\ndimension 2 = "<<d2;
	}
  };
class rect:public fig
  {
    private:
      int a;
    public:
      rect()
	{
	  a=0;
	}
      rect(int t1,int t2):fig(t1,t2)
	{
	  a=d1*d2;
	}
      void calcarea()
	{
	  a=d1*d2;
	}
      void disparea()
	{
	  cout<<"\n\nAREA = "<<a;
	}
  };
void main()
  {
    rect x;
    clrscr();
    x.read();
    x.disp();
    x.calcarea();
    x.disparea();
    rect y(5,3);
    y.disp();
    y.disparea();
    getch();
  }
