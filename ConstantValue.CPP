/*constant values*/


#include<stdio.h>
#include<conio.h>
#include<iostream.h>
const float pi=3.142;

int main()
  {
    int r;
    float area=0;
    printf("enter the radius\n");
    scanf("%d",&r);
    area=pi*r*r;
    printf("area of circle is = %f\n",area);
    getch();
    return 0;
  }
