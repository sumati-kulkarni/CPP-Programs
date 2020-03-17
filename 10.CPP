/*sum of each row of matrix*/

#include<conio.h>
#include<math.h>
#include<iostream.h>

void main()
  {
    int a[3][3];
    clrscr();
    cout<<"\nenter the matrix elements of order 3x3\n";
    for(int i=1;i<=3;i++)
      {
	for(int j=1;j<=3;j++)
	  {
	    cin>>a[i][j];
	  }
      }
    for(i=1;i<=3;i++)
      {
	int r_sum=0;
	for(int j=1;j<=3;j++)
	  {
	    r_sum+=a[i][j];
	  }
	cout<<"\nsum of row "<<i<<" = "<<r_sum;
      }
    getch();
  }