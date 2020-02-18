//reference.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int mother;
  int &mami=mother;
  int &woman=mami;
  mother = 36;
  cout << "mami =" << mami << endl;
  cout << "woman=" << woman << endl;
  cout << "mother="<< mother << endl;
  cout << " mami е[д@лс:\n";
  mami++;
  cout << "mami =" << mami << endl;
  cout << "woman=" << woman << endl;
  cout << "mother="<< mother << endl;
  cout << " address as followings:\n";
  cout << "mother : " << hex << &mother << endl;
  cout << "mami   : " << &mami << endl;
  cout << "woman  : " << &woman << endl;
  getch();
}    