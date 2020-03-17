/* to find area of circle using structures & functions using call by reference*/

#include<conio.h>
#include<iostream.h>

struct circle
  {
    int r;
    float area;
  };

void read(struct circle &);
void area(struct circle &);
void display(struct circle);

void main()
  {
    struct circle x;
    clrscr();
    read(x);
    area(x);
    display(x);
    getch();
  }
void read(struct circle &p)
  {
    cout<<"\nenter radius";
    cin>>p.r;
  }
void area(struct circle &t)
  {
    t.area=3.142*t.r*t.r;
  }
void display(struct circle q)
  {
    cout<<"\narea = "<<q.area;
  }

