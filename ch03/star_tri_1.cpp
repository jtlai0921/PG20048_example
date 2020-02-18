//Star_tri_1.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int i,j;
  for (i=1;i<=5;i++)
  { cout.width(6-i);
    for (j=1;j<=i;j++)
    cout << '*';
    cout << '\n';
  }
  getch();
}