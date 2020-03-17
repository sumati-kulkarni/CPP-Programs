/*pointers to structures*/

#include<conio.h>
#include<iostream.h>

struct emp
  {
    int eno;
    char na[20];
  };
void main()
  {
    struct emp *p,x;
    p=&x;
    clrscr();
    cout<<"\nenter employee number & name\n";
    cin>>p->eno>>p->na;
    cout<<"\n\nemployee number = "<<p->eno;
    cout<<"\nemployee name = "<<p->na;
    getch();
  }