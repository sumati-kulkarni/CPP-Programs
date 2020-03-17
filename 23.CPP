/*sum of 2 numbers using structures*/

#include<conio.h>
#include<iostream.h>

struct sum
  {
    int a,b,c;
  };
void main()
  {
    struct sum x;
    clrscr();
    cout<<"\nenter 2 numbers\n";
    cin>>x.a>>x.b;
    x.c=x.a+x.b;
    cout<<"\n\nsum = "<<x.c;
    getch();
  }