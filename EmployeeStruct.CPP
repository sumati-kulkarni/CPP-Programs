/*program of employee record using structures*/

#include<conio.h>
#include<math.h>
#include<iostream.h>

struct emp
  {
    int eno;
    char na[20];
    long int sal,hra,da,tax,net,gross;
  };
void main()
  {
    struct emp x;
    clrscr();
    cout<<"\nenter employee number, name * his basic salary\n";
    cin>>x.eno>>x.na>>x.sal;
    x.hra=(10/100)*(x.sal);
    x.da=(73/100)*(x.sal);
    x.gross=x.sal+x.hra+x.da;
    x.tax=(30/100)*(x.gross);
    x.net=x.gross-x.tax;
    cout<<"\n\nemployee number = "<<x.eno;
    cout<<"\nemployee name = "<<x.na;
    cout<<"\nbasic salary = "<<x.sal;
    cout<<"\nhouse rent allowance = "<<x.hra;
    cout<<"\ndearness allowance = "<<x.da;
    cout<<"\ngross salary = "<<x.gross;
    cout<<"\nincome tax = "<<x.tax;
    cout<<"\n\nnet salary = "<<x.net;
    getch();
  }