/*  program to initialize the string implementing constructors & destructors  */

#include<conio.h>
#include<string.h>
#include<iostream.h>

class string
  {
    private:
      char *s;
      int len;
    public:
      string();
      string(char []);
      string(string &);
      void read();
      void disp();
      ~string()
      {
               delete [] s;
      }
  };
string::string()
  {
    len=0;
    s=new char[1];
    *s='\0';
  }
string::string(char t[10000])
  {
    len=strlen(t);
    s=new char[len+1];
    strcpy(s,t);
  }
string::string(string &t)
  {
    len=t.len;
    s=new char[len+1];
    strcpy(s,t.s);
  }
void string::read()
  {
    char tmp[10000];
    delete s;
    cin>>tmp;
    len=strlen(tmp);
    s=new char[len+1];
    strcpy(s,tmp);
  }
void string::disp()
  {
    cout<<"\n\nOUTPUT\n";
    cout<<"string = "<<s;
  }
int main()
  {
    string x;
    string y("SSCE");
    string z=y;
    cout<<"\n\ndefault constructor\n";
    x.disp();
    cout<<"\n\nparamerterized constructor\n";
    y.disp();
    cout<<"\n\ncopy constructor\n";
    z.disp();
    cout<<"\n\nreading from keyboard\n";
    z.read();
    z.disp();
    getch();
    return 0;
  }
