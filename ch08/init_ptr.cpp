//init_ptr.cpp
#include <iostream.h>
#include <except.h>
#include <conio.h>
int main()
{ int *p;
  try {						//�ҥ~�B�z
  p = new int (100);		//*p���Ȭ�100
  } catch (xalloc) {
    cout << "�t�m����\n";
    return 1;
  }
  cout <<"��} " << p << " "
       <<"���Ȭ� " << *p << "\n";
  delete p;
  getch();
  return 0;
}