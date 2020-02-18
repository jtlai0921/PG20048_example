//arr_glo.cpp
#include <iostream.h> //cout
#include <conio.h>	//getch()
int a[5];			   //全域陣列變數
void main()
{ for (int i=0;i<5;i++)
  cout << a[i] << ' ';	//列印a陣列元素之值
  cout << endl;
  getch();	//暫停
}
