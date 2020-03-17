/* to find sum of complex numbers using the following functions implementing
   call by value,call by reference & call by pointer */

#include<conio.h>
#include<iostream.h>

struct complex
  {
    int r,i;
  };

void read(struct complex *,struct complex *);
void add(struct complex &,struct complex &,struct complex &);
void display(struct complex);

void main()
  {
    struct complex x,y,z;
    clrscr();
    read(&x,&y);
    add(x,y,z);
    display(z);
    getch();
  }
void read(struct complex *p,struct complex *q)
  {
    cout<<"\nenter complex values of x\n";
    cin>>p->r>>p->i;
    cout<<"\nenter complex values of y\n";
    cin>>q->r>>q->i;
  }
void add(struct complex &p,struct complex &q,struct complex &r)
  {
    r.r=p.r+q.r;
    r.i=p.i+q.i;
  }
void display(struct complex r)
  {
    cout<<"\n\nsum="<<r.r<<"+i"<<r.i;
  }


