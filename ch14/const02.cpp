//const02.cpp
#include <iostream.h>
#include <conio.h>
int get_sum(const int,int);
void main()
{ int a=10,b=20;
  cout << get_sum(a,b);
  getch();
}
int get_sum(const int a,int b)
{ b++;
  //a++;       //cannot modify a const object
  return (a+b);
}
