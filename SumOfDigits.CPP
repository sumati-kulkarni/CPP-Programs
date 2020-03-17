/*sum of digits*/

#include<conio.h>
#include<iostream.h>

void main()
  {
    int n=0,s=0;
    clrscr();
    cout<<"\nenter any number\n";
    cin>>n;
    while(n!=0)
      {
	s=s+n%10;
	n=n/10;
      }
    cout<<"\nsum of digits = "<<s;
    getch();
  }