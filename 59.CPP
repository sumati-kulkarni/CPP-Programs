/*distance*/

#include<conio.h>
#include<iostream.h>

class distance
  {
    int ft,inch;
    public:
      void read()
	{
	  cin>>ft>>inch;
	}
      void add(distance p,distance q)
	{
	  int tmp;
	  tmp=p.inch+q.inch;
	  inch=tmp%12;
	  ft=p.ft+q.ft+tmp/12;
	}
      void display()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nsum = "<<ft<<"'"<<inch<<"\"";
	}
  };

void main()
  {
    distance x,y,z;
    clrscr();
    cout<<"\nentr the 1st distance in foot & inches\n";
    x.read();
    cout<<"\nentr the 2nd distance in foot & inches\n";
    y.read();
    z.add(x,y);
    z.display();
    getch();
  }


