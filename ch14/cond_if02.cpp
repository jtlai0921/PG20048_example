//cond_if02.cpp
#include <iostream.h>
#include <conio.h>
#define US 0
#define JAPAN 1
#define TAIWAN 2
#define COUNTRY TAIWAN
void main()
{
  #if COUNTRY==US
    char currency[]="dollars";
  #elif COUNTRY==JAPAN
    char currency[]="yens";
  #else
    char currency[]="NT dollars";
  #endif
  cout << "currency="<<currency<<endl;
  getch();
}

