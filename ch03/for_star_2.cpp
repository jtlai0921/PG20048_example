//for_star_2.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ short i=1,j;
//**********
//****  ****
//***    ***
//**      **
//*        *
  for (;i<=5;i++)
  { for (j=1;j<=6-i;j++)
    cout << '*';
    cout.width(i*2-1);
    for (j=1;j<=6-i;j++)
    cout <<'*';
    cout << endl;
  }
//    *
//   **
//  ***
// ****
//*****
// ****
//  ***
//   **
//    *
  for (i=1;i<=9;i++)
  { int n = (9-i>=4)?i:10-i;
    cout.width(6-n);
    for (j=1;j<=n;j++)
    cout << '*';
    cout << endl;
  }
//*        *
//**      **
//***    ***
//****  ****
//**********
//****  ****
//***    ***
//**      **
//*        *
  for (i=1;i<=9;i++)
  { int n = (9-i>=4)?i:9-i+1;
    for (j=1;j<=n;j++)
    cout << '*';
    cout.width((5-n)*2+1);
    for (j=1;j<=n;j++)
    cout << '*';
    cout << endl;
  }
  getch();
}