//cond_if03.cpp
#include <iostream.h>
#include <conio.h>
#define MAX(a,b) (a>b?a:b)
void main()
{ int a=10,b=20;
  #ifdef MAX
    cout <<"MAX="<<MAX(a,b)<<endl;
  #endif
  #ifndef MIN
    cout << "MIN not defined.";
  #endif
  getch();
}

