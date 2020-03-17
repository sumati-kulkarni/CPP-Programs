/*constant arguments*/

#include<conio.h>
#include<iostream.h>

int sum(const int,const int);

int main()
  {
    int a,b,c;
    a=10;
    b=20;
    c=sum(a,b);
    cout<<"\n\nsum="<<c;
    getch();
    return 0;
  }

int sum(const int x,const int y)
  {
    int z;
    z=x+y;
    return z;
  }
