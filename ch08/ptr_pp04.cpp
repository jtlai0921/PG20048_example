//ptr_pp04.cpp
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{ char s[10]="Morning";
  char *p = s;
  cout << "一次輸出:"<<p<<endl;
  cout << "一個一個字元輸出:";
  for (int i=0;i<strlen(s);i++)
  cout << *p++;
  cout << endl;
  int a[5]={10,20,30,40,50};
  int *ptr = a;
  cout <<"最初ptr位址:"<<ptr<<endl;
  cout <<"整數陣列輸出:";
  for (int i=0;i<5;i++)
  cout << *ptr++ <<' ';
  cout << endl;
  ptr--;
  cout << "最後ptr位址:"<<ptr<<endl;
  getch();
}
  