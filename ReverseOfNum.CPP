/*reverse a number*/

#include<conio.h>
#include<iostream.h>

void main()
  {
    int n=0,num=0,rev=0;
    clrscr();
    cout<<"\nenter any number\n";
    cin>>n;
    while(n!=0)
      {
	num=n%10;
	rev=rev*10+num;
	n=n/10;
      }
    cout<<"\nreversed number = "<<rev;
    getch();
  }