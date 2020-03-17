/*to find sum of complex numbers using structures*/

#include<conio.h>
#include<iostream.h>

struct complex

  {
    int r,i;
  };

void main()
  {
    struct complex x,y,z;
    clrscr();
    cout<<"\nenter the real & imaginary parts of complex number x\n";
    cin>>x.r>>x.i;
    cout<<"\nenter the real & imaginary parts of complex number y\n";
    cin>>y.r>>y.i;
    z.r=x.r+y.r;
    z.i=x.i+y.i;
    cout<<"\nsum of two complex numbers is:\n";
    cout<<z.r<<"+i"<<z.i;
    getch();
  }