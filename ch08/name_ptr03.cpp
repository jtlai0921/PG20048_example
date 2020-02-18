//name_ptr03.cpp
#include <iostream.h>
#include <conio.h>
const int N=81;
char *get_string();
void main()
{ char *p;
  p = get_string();
  cout << "所輸入字串為:"<<p;
  delete[] p;
  getch();
}
char  *get_string()
{ char *p=new char[N];
  cout << "輸入字串:";
  cin.getline(p,N);
  return p;
}