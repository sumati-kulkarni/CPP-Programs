/* program to overload unary operator ++  */

#include<conio.h>
#include<iostream.h>


class num
  {
    private:
      int n1,n2;
    public:
      void read()
	{
	  cout<<"\nenter two numbers\n";
	  cin>>n1>>n2;
	}
      void disp()
	{
	  cout<<"\nn1 = "<<n1;
	  cout<<"\nn2 = "<<n2;
	}
      num operator ++()
	{
	  n1=n1+1;
	  n2=n2+1;
	  return *this;
	}
      num operator ++(int n)
	{
	  num t=*this;
	  n1=n1+1;
	  n2=n2+1;
	  return t;
	}
  };
void main()
  {
    num x,y;
    clrscr();
    cout<<"OUTPUT";
    cout<<"\n\nfor pre-increment\n";
    x.read();
    y=++x;
    y.disp();
    cout<<"\n\n\nOUTPUT";
    cout<<"\n\nfor post increment\n";
    x.read();
    y=x++;
    y.disp();
    getch();
  }

