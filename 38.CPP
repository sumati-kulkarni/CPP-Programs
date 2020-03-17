/* to add two dates */

#include<conio.h>
#include<iostream.h>

struct date
  {
    int dd,mm,yy;
  };

struct date add1day(struct date);
struct date add(struct date,int);
int sub(struct date,struct date);

int main()
  {
    int nod;
    char ch;
    struct date d1,d2,d3;
    cout<<"\nenter 1st date in format dd/mm/yy\n";
    cin>>d1.dd>>ch>>d1.mm>>ch>>d1.yy;
    cout<<"\n\nenter the number of days to add\n";
    cin>>nod;
    d3=add(d1,nod);
    cout<<"\nafter addition:\t"<<d3.dd<<ch<<d3.mm<<ch<<d3.yy;
    cout<<"\n\nenter 2nd data to substract\n";
    cin>>d2.dd>>ch>>d2.mm>>ch>>d2.yy;
    nod=sub(d1,d2);
    cout<<"\n\nafter substraction:\n"<<"\nnumber of days = "<<nod;
    getch();
    return 0;
  }
struct date add(struct date d,int nod)
  {
    while(nod!=0)
      {
	d=add1day(d);
	nod--;
      }
    return d;
  }
int sub(struct date d1,struct date d2)
  {
    int count=0;
    while(d1.dd!=d2.dd||d1.mm!=d2.mm||d1.yy!=d2.yy)
      {
	count++;
	d2=add1day(d2);
      }
    return count;
  }
struct date add1day(struct date d)
  {
    d.dd++;
    if((d.mm==2)&&((d.yy%4)!=0)&&(d.dd==29))
      {
	d.dd=1;
	d.mm=3;
      }
    else if((d.mm==2)&&((d.yy%4)==0)&&(d.dd==30))
      {
	d.dd=1;
	d.mm=3;
      }
    else if(((d.mm==4)||(d.mm==6)||(d.mm==9))&&(d.dd==31))
      {
	d.dd=1;
	d.mm++;
      }
    else if(d.dd==32)
      {
	d.dd=1;
	d.mm++;
	if(d.mm==13)
	  {
	    d.mm=1;
	    d.yy++;
	  }
      }
    return d;
  }
