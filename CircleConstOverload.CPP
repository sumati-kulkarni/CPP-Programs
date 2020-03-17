/*  program to find area of circle implementing static data members  */


#include<iostream.h>
#include<conio.h>

class circle
  {
     int r;
     float area;
     static float pi;
     public:
       circle()
	 {
	   r=0;
	   area=0;
	   pi=3.142;
	 }
       circle(int tr)
	 {
	   r=tr;
	   area=pi*r*r;
	 }
       circle(circle &t)
	 {
	   t=t.r;
	   area=t.area;
	 }
       void read()
	 {
	   cout<<"\n\nenter the value of radius\n";
	   cin>>r;
	   area=pi*r*r;
	 }
       void disp()
	 {
	   cout<<"\n\nOUTPUT\n";
	   cout<<"\npi="<<pi;
	   cout<<"\narea="<<area;
	 }
  };

float circle::pi;
void main()
  {
    clrscr();
    circle x;
    circle y(5);
    circle z=y;
    x.read();
    x.disp();
    y.disp();
    z.disp();
    getch();
  }