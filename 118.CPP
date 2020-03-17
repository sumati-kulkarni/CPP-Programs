#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main()
  {
    ifstream fin("student.dat");
    int rno,roll,flag=0;
    char na[20];
    float per;
    clrscr();
    cout<<"\nenter the roll number to search\n";
    cin>>roll;
    while(!fin.eof())
      {
	fin>>rno>>na>>per;
	if(roll==rno)
	  {
	    cout<<na<<per;
	    flag=1;
	    break;
	  }
      }
    if(flag==0)
      {
	cout<<"\nnot found";
      }
    fin.close();
    getch();
  }