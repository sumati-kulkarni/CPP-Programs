

#include<iostream.h>
#include<conio.h>

class b
  {
    public:
      void dispb()
	{
	  cout<<"\nbase class\n";
	}
  };
class d:public b
  {
    public:
      void dispd()
	{
	  cout<<"\nderived class";
	}
  };
void main()
  {
    clrscr();
    b *p;
    p=new b;
    cout<<"\nb *p";
    cout<<"\n\np=new b";
    cout<<"\n\nbase class pointer to base class member function\n";
    p->dispb();
    cout<<"\nbase class pointer cannot point to derived class member function\n";
    cout<<"--------------------------------------------------------------------------------";
    cout<<"\nd *q";
    cout<<"\n\nq=new d";
    cout<<"\n\nthis is not possible";
    cout<<"\n\nderived class pointer cannot point to base class member function\n";
    cout<<"\nderived class pointer cannot point to derived class member function\n";
    cout<<"--------------------------------------------------------------------------------";
    b *r;
    r=new d;
    cout<<"\nb *r";
    cout<<"\n\np=new d";
    cout<<"\n\nbase class pointer to base class member function\n";
    r->dispb();
    cout<<"\nbase class pointer cannot point to derived class member function\n";
    cout<<"--------------------------------------------------------------------------------";
    d *s;
    s=new d;
    cout<<"\nd *s";
    cout<<"\n\ns=new d";
    cout<<"\n\nderived class pointer to base class member function\n";
    s->dispb();
    cout<<"\n\nderived class pointer to derived class member function\n";
    s->dispd();
    getch();
  }