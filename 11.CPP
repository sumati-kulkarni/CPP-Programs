/*dynamic memory allocation*/

#include<conio.h>
#include<iostream.h>

int main()
  {
    int n,*p;
    cout<<"\nenter the value of n\n";
    cin>>n;
    p=new int[n];
    cout<<"\nenter "<<n<<" values\n";
    for(int i=0;i<n;i++)
      {
	cin>>p[i];
      }
    cout<<"\nentered elements are\n";
    for(int i=0;i<n;i++)
      {
	cout<<"\n"<<p[i];
      }
    delete p;
    getch();
    return 0;
  }
