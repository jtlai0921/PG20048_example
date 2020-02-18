//include02.cpp
#include <iostream.h>
#include <conio.h>
#define SIZE 10
#define TITLE "The content of \
array as following:\n"
void list(int[])
void main()
{ int a[SIZE],i;
  for (i=0;i<SIZE;i++)
  a[i]=i+1;
  cout <<TITLE;
  list(a);
  getch();
}
void list(int a[])
{ for (int i=0;i<SIZE;++i)
  cout << a[i] << ' ';
  cout << endl;
}  