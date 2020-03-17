/* program to swap two values using friend functions */

#include<conio.h>
#include<iostream.h>

class num
  {
    int a,b;
    public:
      void read();
      void disp();
      friend void swap(num &);
  };
void num::read()
  {
    cout<<"\nenter the two values\n";
    cin>>a>>b;
  }
void num::disp()
  {
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
  }
void swap(num &y)
  {
    int t;
    t=y.a;
    y.a=y.b;
    y.b=t;
  }
void main()
  {
    num x;
    clrscr();
    x.read();
    cout<<"\n\nBefore swapping\n";
    x.disp();
    swap(x);
    cout<<"\n\nAfter swapping\n";
    x.disp();
    getch();
  }
