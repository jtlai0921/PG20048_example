/* al_tria.cpp */
#include <iostream.h>
#include <conio.h>
char *getstring(int,char); /* prototype */
void main()
{ int i;
  char *s;
  for (i=1;i<=10;i++)
  { s = getstring(i,64+i);
    cout<<s<<endl;
    delete[]s;
  }
  getch();
}
char *getstring(int n,char ch)
{ char *t;
  int i;
  t = new char[n+1];
  for (i=0;i<n;i++)
  *(t+i) = ch;
  *(t+i) = '\0';
  return t;
}

