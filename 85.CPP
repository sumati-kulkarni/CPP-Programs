/* program to implement bank transaction */

#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

class acc
  {
    private:
      int acno;
      char na[20];
      int bal;
      int dep,with;
    public:
      void openacc();
      void deposit();
      void withdrawal();
      void disp();
  };
void acc::openacc()
  {
    dep=with=0;
    cout<<"\nEnter The Following\n\n";
    cout<<"\nAccount Number : ";
    cin>>acno;
    cout<<"\nName : ";
    cin>>na;
    cout<<"\nDeposit Amount : ";
    cin>>dep;
    bal=dep;
  }
void acc::deposit()
  {
    int amt;
    cout<<"\nEnter Deposit Amount : ";
    cin>>amt;
    bal=bal+amt;
    dep=dep+amt;
  }
void acc::withdrawal()
  {
    int amt;
    cout<<"\nEnter Withdrawal Amount : ";
    cin>>amt;
    if((bal-1000)>=amt)
      {
	bal=bal-amt;
	with=with+amt;
      }
    else
      {
	cout<<"\nInsufficient Balance.Cannot Withdraw Cash\n";
      }
  }
void acc::disp()
  {
     cout<<"\n\nOUTPUT\n\n";
     cout<<"\nAccount Number    : "<<acno;
     cout<<"\nName              : "<<na;
     cout<<"\nDeposit Amount    : "<<dep;
     cout<<"\nWithdrawal Amount : "<<with;
     cout<<"\n\n        BALANCE : "<<bal;
  }
void main()
  {
    acc x;
    int ch;
    clrscr();
    cout<<"     BANK ACCOUNT\n\n";
    x.openacc();
    for(;;)
      {
	cout<<"\n1  Deposit";
	cout<<"\n2  Withdrawal";
	cout<<"\n3  Display";
	cout<<"\n4  Exit";
	cout<<"\n\nenter your choice\n";
	cin>>ch;
	switch(ch)
	  {
	    case 1 : x.deposit();
		     break;
	    case 2 : x.withdrawal();
		     break;
	    case 3 : x.disp();
		     break;
	    case 4 : exit(0);
	    default : cout<<"\nInvalid Choice\n";
		      break;
	  }
      }
  }
