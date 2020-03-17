

#include<conio.h>
#include<iostream.h>
#include<fstream.h>

int main()
  {
    ifstream fin("letter.doc");
    char ch;
    while(!fin.eof())
      {
	fin>>ch;
	cout<<ch;
      }
    fin.close();
    getch();
    return 0;
  }
