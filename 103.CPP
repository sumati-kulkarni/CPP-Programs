/* program using virtual derivation */

#include<iostream.h>
#include<conio.h>

class stud
  {
    int rno;
    char na[20];
    public:
      void read()
	{
	  cout<<"\n\nenter the roll number & name of a student\n";
	  cin>>rno>>na;
	}
      void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\nroll number : "<<rno;
	  cout<<"\n\nname : "<<na;
	}
  };
class marks:virtual public stud
  {
    protected:
      int m1,m2;
    public:
      void read()
	{
	  stud::read();
	  cout<<"\nenter two subject marks\n";
	  cin>>m1>>m2;
	}
      void disp()
	{
	  stud::disp();
	  cout<<"\n\nmarks 1 : "<<m1;
	  cout<<"\n\nmarks 2 : "<<m2;
	}
  };
class sports:virtual public stud
  {
    char grade;
    public:
      void read()
	{
	  cout<<"\nenter the grade\n";
	  cin>>grade;
	}
      void disp()
	{
	  cout<<"\n\ngrade : "<<grade;
	}
  };
class res:public marks,public sports
  {
    float total,per;
    public:
      void read()
	{
	  marks::read();
	  sports::read();
	  total=m1+m2;
	  per=(total/200)*100;
	}
      void disp()
	{
	  marks::disp();
	  sports::disp();
	  cout<<"\n\ntotal : "<<total;
	  cout<<"\n\npercentage : "<<per;
	}
  };
int main()
  {
    res x;
    x.read();
    x.disp();
    getch();
    return 0;
  }
