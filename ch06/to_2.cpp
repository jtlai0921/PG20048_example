//To_2.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <limits.h>
void main()
{ short n,bit[16]={0},i=15;
  randomize();
  n = random(SHRT_MAX);		//SHRT_MAX=32767
  cout << "n=" << n << endl;
  do
    { bit[i--]=n %2;			//求餘數非0即為1
      n /=2;					//求商
    }
  while (n!=0);
  cout << "二進位為:";
  for (i=0;i<16;i++)
  cout << bit[i];
  getch();
}
