/*to find sum of complex numbers using dynamic allocation of structures*/

#include<conio.h>
#include<iostream.h>

struct emp
  {
    int eno;
    char na[20];
  };

int main()
  {
    struct emp *p;
    p=new struct emp;
    cout<<"\nenter employee number & employee name\n";
    cin>>p->eno>>p->na;
    cout<<"\n\nemployee number = "<<p->eno<<"\nemployee number = "<<p->na;
    getch();
    return 0;
  }
