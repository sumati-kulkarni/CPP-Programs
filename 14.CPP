/*difference in case of functions*/
/*call by value*/

#include<conio.h>
#include<iostream.h>

int sum(int,int);

int main()
  {
    int a,b,c;
    a=10;
    b=20;
    c=sum(a,b);
    cout<<"\nsum= "<<c;
    getch();
    return 0;
  }
int sum(int x,int y)
  {
    int z;
    z=x+y;
    return z;
  }
