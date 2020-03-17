/* program of student record implimenting static members */

#include<conio.h>
#include<iostream.h>

class student
  {
    private:
      int rno;
      char na[20];
      int total;
      static int nextrno;
    public:
      void read()
	{
	  nextrno++;
	  rno=nextrno;
	  cin>>na>>total;
	}
      void disp()
	{
	  cout<<"\n"<<rno<<"\t"<<na<<"\t"<<total;
	}
  };
int student::nextrno;
void main()
  {
    student x[10];
    clrscr();
    cout<<"\nenter name & total marks of 10 students\n";
    for(int i=0;i<10;i++)
      x[i].read();
    cout<<"\n\nOUTPUT\n";
    cout<<"\nrno\tname\tmarks\n";
    for(i=0;i<10;i++)
      x[i].disp();
    getch();
  }