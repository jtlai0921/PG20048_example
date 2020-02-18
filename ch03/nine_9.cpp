//nine_9.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ int i,j;
  for (i=1;i<=9;i++)		//外圈
  {
    for (j=1;j<=9;j++)	//內圈
    cout << i << 'x' << j << '=' << i*j << endl;
    cout << endl;			//每一內圈執行完後空一列
  }
  getch();
}