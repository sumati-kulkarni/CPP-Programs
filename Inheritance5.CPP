

#include<iostream.h>
#include<conio.h>

class media
  {
    char title[20];
    float price;
    public:
      virtual void read()
	{
	  cout<<"\n\nenter the title name & price of a book\n";
	  cin>>title>>price;
	}
      virtual void disp()
	{
	  cout<<"\n\nOUTPUT\n";
	  cout<<"\ntitle name : "<<title;
	  cout<<"\nprice : "<<price;
	}
  };
class book:public media
  {
    private:
      int nop;
    public:
      void read()
	{
	  media::read();
	  cout<<"\nenter number of pages\n";
	  cin>>nop;
	}
      void disp()
	{
	  media::disp();
	  cout<<"\nnumber of pages : "<<nop;
	}
  };
class tape:public media
  {
    private:
      int dur;
    public:
      void read()
	{
	  media::read();
	  cout<<"\nenter the duration\n";
	  cin>>dur;
	}
      void disp()
	{
	  media::disp();
	  cout<<"\nduration : "<<dur;
	}
  };
int main()
  {
    media *p[2];
    int ch;
    for(int i=0;i<2;i++)
      {
	cout<<"\n\n\n1 book\n2 tape\n\nenter your choice\n";
	cin>>ch;
	if(ch==1)
	  {
	    p[i]=new book;
	  }
	else
	  {
	    p[i]=new tape;
	  }
	p[i]->read();
	p[i]->disp();
      }
    getch();
    return 0;
  }
