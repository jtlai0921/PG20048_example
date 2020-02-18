//fun_allo.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
int get_allo();
void main()
{ int *a,n;
  n = get_allo();
  a = new int[n];
  for (int i=0;i<n;i++)
  { *(a+i)=random(10);
    cout <<*(a+i)<<' ';
  }
  delete [] a;
  getch();
}
int get_allo()
{ int size;
  cout << "所需大小=";
  cin >> size;
  return size;
}