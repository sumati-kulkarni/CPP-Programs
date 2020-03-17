/* program to implement stack declaring class  */


#include<conio.h>
#include<iostream.h>

class stack
  {
    private:
      int s[10];
      int top;
    public:
      int isfull();
      int isempty();
      void push(int);
      int pop();
      void assign();
      void disp();
  };
void stack::disp()
  {
    for(int i=top;i>=0;i--)
      {
	cout<<"\n"<<s[i];
      }
    if(top==4)
      {
	cout<<"Stack is Full\n";
      }
  }

void stack::assign()
  {
    top=-1;
  }
int stack::isfull()
  {
    if(top==4)
      return 1;
    else
      return 0;
  }
int stack::isempty()
  {
    if(top==-1)
      return 1;
    else
      return 0;
  }
void stack::push(int d)
  {
    top++;
    s[top]=d;
  }
int stack::pop()
  {
    int d;
    d=s[top];
    top--;
    return d;
  }
void main()
  {
    stack x;
    int ch,d;
    clrscr();
    x.assign();
    clrscr();
    do
      {
	cout<<"\n\n1 -> push\n2 -> pop\n3 -> Display\n4 -> exit\n\nenter your choice : ";
	cin>>ch;
	switch(ch)
	  {
	    case 1 : if(x.isfull())
		       {
			 cout<<"\nstack overflow";
		       }
		     else
		       {
			 cout<<"\nenter the element which you want to insert :\n";
			 cin>>d;
			 x.push(d);
		       }
		     break;
	    case 2 : if(x.isempty())
		       {
			 cout<<"\nstack underflow\n";
		       }
		     else
		       {
			 d=x.pop();
			 cout<<"\npopped data="<<d;
		       }
		     break;
	    case 3 : if(x.isempty())
		       {
			 cout<<"\nStack Empty\n";
		       }
		     else
		       {
			 x.disp();
		       }
		     break;
	    case 4 : break;
	  }
      }while(ch!=4);
  }
