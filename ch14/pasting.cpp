//pasting.cpp
#include <iostream.h>
#include <conio.h>
#define MERGE(p,q) p##q
void main()
{ int xy=20;
  cout <<MERGE(x,y)<<endl;
  cout << MERGE(x,y)/2<<endl;
  getch();
}

