/* program to generate electric bill  */

#include<conio.h>
#include<iostream.h>

class elecbill
  {
    private:
      int rrno;
      char na[20];
      int presr;
      int prevr;
      int units;
      int amt;
      void calcbill();
    public:
      void read();
      void disp();
  };
void elecbill::read()
  {
    cout<<"\nR R Number : ";
    cin>>rrno;
    cout<<"\nName : ";
    cin>>na;
    cout<<"\nPrevious Readings : ";
    cin>>prevr;
    cout<<"\nPresent Readings : ";
    cin>>presr;
    calcbill();
  }
void elecbill::calcbill()
  {
    units=presr-prevr;
    if(units<31)
      amt=units*1.85;
    else if(units<101)
      amt=(30*1.85)+(units-30)*2.90;
    else if(units<201)
      amt=(30*1.85)+(70*2.90)+(units-100)*3.60;
    else if(units<301)
      amt=(30*1.85)+(70*2.90)+(100*3.60)+(units-200)*4.20;
    else if(units<401)
      amt=(30*1.85)+(70*2.90)+(100*3.60)+(100*4.20)+(units-300)*4.45;
    else if(units>400)
      amt=(30*1.85)+(70*2.90)+(100*3.60)+(100*4.20)+(100*4.45)+(units-400)*4.70;
  }
void elecbill::disp()
  {
    cout<<"\n\nOUTPUT\n\n";
    cout<<"\nR R Number        : "<<rrno;
    cout<<"\nName              : "<<na;
    cout<<"\nPrevious Readings : "<<prevr;
    cout<<"\nPresent Readings  : "<<presr;
    cout<<"\nUnits             : "<<units;
    cout<<"\n\nTOTAL             : "<<amt;
  }
void main()
  {
    elecbill x;
    clrscr();
    x.read();
    x.disp();
    getch();
  }