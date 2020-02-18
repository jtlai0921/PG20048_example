//include05.cpp
#include <iostream.h>
#include <conio.h>
#define SWAP(a,b) { int t;\
                    t=a; \
                    a=b; \
                    b=t;}
void main()
{ int a=10,b=20;
  cout << "¤¬´««e:"<<a<<' '<<b<<endl;
  SWAP(a,b);
  cout << "¤¬´««á:"<<a<<' '<<b<<endl;
  getch();
}

