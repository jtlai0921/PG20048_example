//random.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>	//time_t
void main(void)
{
  int i;
  cout << "���ϥ�srand:\n";
  cout<"����10�� 0 �� 99���üƦp�U:\n";
  for(i=0; i<10; i++)
    cout<<random(100)<<' ';
  cout << "\n�ϥ�srand:\n";
  srand(100);
  for(i=0; i<10; i++)
    cout<<random(100)<<' ';
  cout << "\n��srand�ϥ�time:\n";
  time_t t;
  srand((unsigned)time(&t));	//�P�ϥ�randomize()�ۦ�
  for(i=0; i<10; i++)
    cout<<random(100)<<' ';
  getch();
}
