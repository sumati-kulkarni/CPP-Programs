/* to find the sum of two distances */

#include<conio.h>
#include<iostream.h>

struct distance
  {
    int ft,inch;
  };

void read(struct distance *);
void add(struct distance &,struct distance &,struct distance &);
void display(struct distance);

void main()
  {
    struct distance x,y,z;
    clrscr();
    cout<<"\nentr 1st distance in format distance-inches\n";
    read(&x);
    cout<<"\nentr 2nd distance in format distance-inches\n";
    read(&y);
    cout<<"\nsum of distances is : ";
    add(x,y,z);
    display(z);
    getch();
  }
void read(struct distance *p)
  {
    cin>>p->ft>>p->inch;
  }
void add(struct distance &p,struct distance &q,struct distance &r)
  {
    int f,i;
    f=p.ft+q.ft;
    i=p.inch+q.inch;
    r.inch=i%12;
    r.ft=f+i/12;
  }
void display(struct distance x)
  {
    cout<<x.ft<<"'"<<x.inch<<"\"";
  }