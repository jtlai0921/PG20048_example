//8724.cpp
#include <iostream.h>
#include <conio.h>
void PRINT (int *);
int main()
{ int *piA=new int[10];
  int I=0;
  while (I<10)
  { cout << "\n Enter a number:";
    cin >> piA[I++];
  }
  PRINT(piA);
  delete[] piA;
  getch();
  return 0;
}

void PRINT (int *AA)
{ for (int i=0;i<10;i++)
  cout << *(AA+i) << ",";
}