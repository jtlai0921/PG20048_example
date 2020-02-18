//const.cpp
#include <iostream.h>
#include <conio.h>
const int SIZE=5;
void list_array(int []);
void main()
{ int a[SIZE];
  for (int i=0;i<SIZE;i++)
  a[i]=i+1;
  list_array(a);
  getch();
}
void list_array(int a[])
{ for (int i=0;i<SIZE;i++)
  cout << a[i]<<' ';
  cout << endl;
}
