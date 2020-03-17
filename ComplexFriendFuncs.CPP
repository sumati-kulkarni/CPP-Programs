/* to add two complex numbers declaring all the functions as friend
   functions */

#include<conio.h>
#include<iostream.h>

class complex
  {
    int r,i;
    public:
      friend void read(complex &);
      friend void disp(complex);
      friend complex add(complex,complex);
  };

void read(complex &t)
  {
    cout<<"\nenter the real & imaginary part of a complex number\n";
    cin>>t.r>>t.i;
  }
void disp(complex t)
  {
    cout<<"\n\nOUTPUT\n";
    cout<<"\nsum = "<<t.r<<"+i"<<t.i;
  }
complex add(complex t1,complex t2)
  {
    complex t;
    t.r=t1.r+t2.r;
    t.i=t1.i+t2.i;
    return t;
  }
void main()
  {
    complex x,y,z;
    clrscr();
    read(x);
    read(y);
    z=add(x,y);
    disp(z);
    getch();
  }

