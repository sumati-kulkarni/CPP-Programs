#include<iostream.h>
#include<conio.h>


void check(int N)
  {
    if(N==0)
      throw 5;
    else if(N>0)
      throw 3.5f;
    else
      throw 4.5;
  }
int main()
  {
    int N;
    cout<<"\nEnter a Number\n";
    cin>>N;
    try
      {
	check(N);
      }catch(int e)
	{
	  cout<<"\nNumber is Zero\n";
	}
      catch(float e)
	{
	  cout<<"\nNumber is Positive\n";
	}
      catch(double e)
	{
	  cout<<"\nNumber is Negetive\n";
	}
    getch();
    return 0;
  }
