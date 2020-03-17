/* program to read & display book record  */

#include<iostream.h>
#include<conio.h>

class media
  {
    int price;
    char title[20];
    public:
      void read()
	{
	  cout<<"\nenter the title & price of a book\n";
	  cin>>title>>price;
	}
     void disp()
	{
	  cout<<"\n\nOUTOUT\n\n";
	  cout<<"\ntitle : "<<title;
	  cout<<"\n\nprice : "<<price;
	}
  };
class book:public media
  {
    int nop;
    public:
      void readb()
	{
	  read();
	  cout<<"\nenter the number of pages of a book\n";
	  cin>>nop;
	}
      void dispb()
	{
	  disp();
	  cout<<"\n\nnumber of pages : "<<nop;
	}
  };
void main()
  {
    book x;
    clrscr();
    x.readb();
    x.dispb();
    getch();
  }