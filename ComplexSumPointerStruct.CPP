/*to find sum of complex numbers using pointer to structures*/

#include<conio.h>
#include<iostream.h>

struct complex
  {
    int r,i;
  };

void main()
  {
    struct complex x,*p,y,*q,z,*r;
    clrscr();
    p=&x;
    q=&y;
    r=&z;
    cout<<"\nenter the real & imaginary parts of complex number x\n";
    cin>>p->r>>p->i;
    cout<<"\nenter the real & imaginary parts of complex number y\n";
    cin>>q->r>>q->i;
    r->r=p->r+q->r;
    r->i=p->i+q->i;
    cout<<"\nsum of two complex numbers is:\n";
    cout<<r->r<<"+i"<<r->i;
    getch();
  }