//name_ptr03.cpp
#include <iostream.h>
#include <conio.h>
const int N=81;
char *get_string();
void main()
{ char *p;
  p = get_string();
  cout << "�ҿ�J�r�ꬰ:"<<p;
  delete[] p;
  getch();
}
char  *get_string()
{ char *p=new char[N];
  cout << "��J�r��:";
  cin.getline(p,N);
  return p;
}