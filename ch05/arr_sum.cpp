//arr_sum.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
#include <stdlib.h>		//randomize(),random()
const N=5;
void main()
{ int a[N+1]={0};	//���]��0
  randomize();
  for (int i=0;i<N;i++)
  { a[i]=random(10);
    a[N] +=a[i];
  }
  cout <<"�}�C������:";
  for (int i=0;i<N;i++)
  cout << a[i]<<' ';
  cout << "�M��:"<<a[N]<<endl;
  getch();
 }
