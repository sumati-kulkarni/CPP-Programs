/* program overloading '=='  '!='  '>'  '<'  operators */

#include<conio.h>
#include<string.h>
#include<iostream.h>

class str
  {
    private:
      char s[100];
    public:
      void read()
	{
	  cout<<"\nenter the string\n";
	  cin>>s;
	}
      void disp()
	{
	  cout<<"\nOUTPUT\n";
	  cout<<s;
	}
      int operator ==(str &t2)
	{
	  if(strcmp(s,t2.s)==0)
	    return 1;
	  else
	    return 0;
	}
      int operator !=(str &t2)
	{
	  if(strcmp(s,t2.s)!=0)
	    return 1;
	  else
	    return 0;
	}
      int operator >(str &t2)
	{
	  if(strcmp(s,t2.s)>0)
	    return 1;
	  else
	    return 0;
	}
    int operator <(str &t2)
      {
	if(strcmp(s,t2.s)<0)
	  return 1;
	else
	  return 0;
      }
  };
void main()
  {
    str s1,s2;
    clrscr();
    s1.read();
    s2.read();
    if(s1==s2)
      cout<<"\n1st string is equal to 2nd string\n";
    else if(s1!=s2)
      cout<<"\n1st string is not equal to 2nd string\n";
    if(s1>s2)
      cout<<"\n1st string is greater than 2nd string\n";
    else if(s1<s2)
      cout<<"\n1st string is smaller than 2nd string\n";
    getch();
  }
