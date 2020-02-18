//2array_ret.cpp
#include <iostream.h>
#include <stdlib.h>	//random
#include <iomanip.h>	//setw()
#include <conio.h>
#define R 5
#define C 4
void set_array(int[][C]);
void main()
{ int a[R][C];
  set_array(a);
  for (int i=0;i<R;i++)
  { for (int j=0;j<C;j++)
    cout<<setw(4)<<a[i][j];
    cout << endl;
  }
  getch();
}
//set_array()
void set_array(int x[][C])
{ for (int i=0;i<R;i++)
  for (int j=0;j<C;j++)
  x[i][j]=random(10)+1;
}
