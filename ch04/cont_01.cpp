//cont_01.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int i;
  for (i=1;i<10;i++)
  { cout <<i;
    if (i>=5) break;
    cout <<'A';
  }
  getch();
}    