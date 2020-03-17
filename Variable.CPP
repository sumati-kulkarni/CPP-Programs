/*difference in variable declaration*/


#include<iostream.h>
#include<stdio.h>
#include<conio.h>
int main()
  {
    int a,b;
    a=10;
    b=20;
    int c;
    c=a+b;
    printf("\nsum= %d\n",c);
    {
      int d=0;
      d=d+c;
    }
    int m,n;
    printf("\nenter any two numbers\n");
    scanf("%d%d",&m,&n);
    if(m!=n)
      {
	int x,y;
	x=m;
	y=n;
	printf("entered numbers are %d & %d\n",x,y);
      }
    int z[5];
    printf("enter any 5 integer values\n");
    for(int i=0;i<5;i++)
      {
	scanf("%d",&z[i]);
      }
    printf("entered numbers are:\n");
    for(int i=0;i<5;i++)
      {
	printf("%d\n",z[i]);
      }
    getch();
    return 0;
  }
