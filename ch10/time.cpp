//time.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  time_t t;
  t = time(NULL);	//���o�ثe����ɶ�
  cout <<"��1970�~1��1���"<<ctime(&t)<<"�@��:"<< t <<"��";
  getch();
}