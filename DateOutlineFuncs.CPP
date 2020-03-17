/* to add two dates using class, data members & member functions */

#include<conio.h>
#include<iostream.h>

class date
  {
    int dd,mm,yy;
    void add1day();
    public:
      void read();
      void disp();
      date add(int);
      int sub(date);
  };

void main()
  {
    int nod;
    struct date d1,d2;
    clrscr();
    cout<<"\nenter 1st date\n";
    d1.read();
    cout<<"\nenter the number of days to add\n";
    cin>>nod;
    d2=d1.add(nod);
    cout<<"\n\nOUTPUT\n";
    cout<<"\nafter addition:\t";
    d2.disp();
    nod=d2.sub(d1);
    cout<<"\n\nafter substraction:\n"<<"\nnumber of days = "<<nod;
    getch();
  }
void date::read()
  {
    cin>>dd>>mm>>yy;
  }
void date::disp()
  {
    cout<<dd<<"/"<<mm<<"/"<<yy;
  }
date date::add(int nod)
  {
    date tmp;
    tmp=*this;
    while(nod!=0)
      {
	tmp.add1day();
	nod--;
      }
    return tmp;
  }
int date::sub(date d1)
  {
    int count=0;
    while(d1.dd!=dd||d1.mm!=mm||d1.yy!=yy)
      {
	count++;
	d1.add1day();
      }
    return count;
  }
void date::add1day()
  {
    dd++;
    if((mm==2)&&((yy%4)!=0)&&(dd==29))
      {
	dd=1;
	mm=3;
      }
    else if((mm==2)&&((yy%4)==0)&&(dd==30))
      {
	dd=1;
	mm=3;
      }
    else if(((mm==4)||(mm==6)||(mm==9))&&(dd==31))
      {
	dd=1;
	mm++;
      }
    else if(dd==32)
      {
	dd=1;
	mm++;
	if(mm==13)
	  {
	    mm=1;
	    yy++;
	  }
      }
  }
