//stime.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  time_t t;
  t = time(NULL);
  cout<<"�ثe���:"<<ctime(&t);
  t -= 24L*60L*60L;  //�]�w�e�@��
  stime(&t);
  cout<<"�s���:"<< ctime(&t);
  getch();
}
