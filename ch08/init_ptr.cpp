//init_ptr.cpp
#include <iostream.h>
#include <except.h>
#include <conio.h>
int main()
{ int *p;
  try {						//例外處理
  p = new int (100);		//*p之值為100
  } catch (xalloc) {
    cout << "配置失敗\n";
    return 1;
  }
  cout <<"位址 " << p << " "
       <<"之值為 " << *p << "\n";
  delete p;
  getch();
  return 0;
}