//f01.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <stdlib.h>		//random()
void main()
{ int a[6][5]={0},i,j;
  for (i=0;i<5;i++)
  for (j=0;j<5;j++)
  a[i][j]=random(101);	//data between 0 and 100
  // or cin >> a[i][j];
  for (i=0;i<5;i++)
  for (j=0;j<5;j++)
  a[5][i]+=a[j][i]; 		//calculate
  for (i=0;i<6;i++)
  { for (j=0;j<5;j++)
    { cout.width(4);
      cout << a[i][j] << " ";	//list
    }
    cout << "\n";
  }
 getch();
}