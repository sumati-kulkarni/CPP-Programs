/*difference in structure function calls*/
/*call by value*/

#include<conio.h>
#include<iostream.h>

struct complex
  {
    int r,i;
  };

struct complex sum(struct complex,struct complex);
void main()
  {
    struct complex x,y,z;
    clrscr();
    cout<<"\nenter tne complex values of x\n";
    cin>>x.r>>x.i;
    cout<<"\nenter tne complex values of y\n";
    cin>>y.r>>y.i;
    z=sum(x,y);
    cout<<"sum = "<<z.r<<"+i"<<z.i;
    getch();
  }
struct complex sum(struct complex a,struct complex b)
  {
    struct complex c;
    c.r=a.r+b.r;
    c.i=a.i+b.i;
    return c;
  }