/*calculating area of circle using structures*/

#include<conio.h>
#include<iostream.h>

struct area
  {
    int r;
    float area;
  };
void main()
  {
    struct area x;
    clrscr();
    cout<<"\nenter radius\n";
    cin>>x.r;
    x.area=3.142*x.r*x.r;
    cout<<"\n\narea of circle = "<<x.area;
    getch();
  }