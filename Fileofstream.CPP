

#include<conio.h>
#include<iostream.h>
#include<fstream.h>

int main()
  {
    ofstream fout("letter.doc");
    char ch;
    cout<<"\nenter the file contents\n";
    while((ch=getche())!='\x1A')
      {
	fout<<ch;
      }
    fout.close();
    getch();
    return 0;
  }
