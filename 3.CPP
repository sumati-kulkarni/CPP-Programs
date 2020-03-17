/*reference variables*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>

int main()
  {
    int a=10,b=20;
    printf("entered values are:\n");
    printf("A=%d\nB=%d\n",a,b);
    int &x=a,&y=b;
    printf("after creating reference variables\n");
    printf("X=%d\nY=%d\n",x,y);
    getch();
    return 0;
  }
