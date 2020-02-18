//random.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>	//time_t
void main(void)
{
  int i;
  cout << "未使用srand:\n";
  cout<"產生10個 0 到 99之亂數如下:\n";
  for(i=0; i<10; i++)
    cout<<random(100)<<' ';
  cout << "\n使用srand:\n";
  srand(100);
  for(i=0; i<10; i++)
    cout<<random(100)<<' ';
  cout << "\n讓srand使用time:\n";
  time_t t;
  srand((unsigned)time(&t));	//與使用randomize()相似
  for(i=0; i<10; i++)
    cout<<random(100)<<' ';
  getch();
}
