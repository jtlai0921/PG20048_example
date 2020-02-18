//cond_if.cpp
#include <iostream.h>
#include <conio.h>
#define MAX 10
void main()
{ int i=0;
  #if MAX==10   //©Î(MAX==10)
    int a[MAX];
    for (;i<MAX;i++)
    { a[i]=i+1;
      cout << a[i]<<" ";
    }
  #endif
  cout << endl;
  cout << "i="<<i<<endl;
  getch();
}

