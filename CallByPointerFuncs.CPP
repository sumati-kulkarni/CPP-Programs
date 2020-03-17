/*difference in case of functions*/
/*call by pointer*/

#include<conio.h>
#include<iostream.h>

void sum(int *,int *,int *);

int main()
  {
    int a,b,c;
    a=10;
    b=20;
    sum(&a,&b,&c);
    cout<<"\nsum= "<<c;
    getch();
    return 0;
  }
void sum(int *x,int *y,int *z)
  {
    *z=*x+*y;
  }
