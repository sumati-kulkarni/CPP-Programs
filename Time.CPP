/* to add & substract to different times */

#include<conio.h>
#include<iostream.h>

struct time
  {
    int hh,mm,ss;
  };


struct time add(struct time,struct time);
struct time sub(struct time,struct time);

void main()
  {
    char ch;
    struct time t1,t2,t3;
    clrscr();
    cout<<"\nentr the 1st time in format hr:min:sec\n";
    cin>>t1.hh>>ch>>t1.mm>>ch>>t1.ss;
    cout<<"\nentr 2nd time to add in format hr:min:sec\n";
    cin>>t2.hh>>ch>>t2.mm>>ch>>t2.ss;
    t3=add(t1,t2);
    cout<<"\nafter addition: "<<t3.hh<<ch<<t3.mm<<ch<<t3.ss;
    cout<<"\nentr 2nd time to sustract in format hr:min:sec\n";
    cin>>t2.hh>>ch>>t2.mm>>ch>>t2.ss;
    t3=sub(t1,t2);
    cout<<"\nafter substraction: "<<t3.hh<<ch<<t3.mm<<ch<<t3.ss;
    getch();
  }
struct time add(struct time t1,struct time t2)
  {
    struct time t;

    int h,m,s;
    s=t1.ss+t2.ss;
    t.ss=s%60;
    m=t1.mm+t2.mm+s/60;
    t.mm=m%60;
    h=t1.hh+t2.hh+m/60;
    t.hh=h%24;
    return t;
  }
struct time sub(struct time t1,struct time t2)
  {
    struct time t;
    if(t2.ss>t1.ss)
      {
	t1.mm=t1.mm-1;
	t1.ss=t1.ss+60;
      }
    t.ss=t1.ss-t2.ss;
    if(t2.mm>t1.mm)
      {
	t1.hh=t1.hh-1;
	t1.mm=t1.mm+60;
      }
    t.mm=t1.mm-t2.mm;
    t.hh=t1.hh-t2.hh;
    return t;
  }

