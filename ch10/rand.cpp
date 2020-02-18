//rand.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void main(void)
{
  int i;
  cout << "RAND_MAX=" << RAND_MAX << endl;
  randomize(); 	//啟動亂數函數產生器
  cout<"產生10個 0 到 99之亂數如下:\n";
  for(i=0; i<10; i++)
    cout<<(rand() % 100)<<' ';	//求除以100之餘數
  getch();
}
