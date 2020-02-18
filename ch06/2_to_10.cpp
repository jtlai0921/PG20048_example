//2_to_10.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char ch[9]="00001111";
  int n=0,i;
  for (i=0; i<8;i++)
  if (ch[i]=='1')
  { int x=1,j;
    for (j=1;j<(8-i);j++)
    x = x * 2;
    n += x;
  }
  cout << ch <<"="<<n;
  getch();
}

