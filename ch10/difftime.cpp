//difftime.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  time_t start,end;
  start = time(NULL);
  cout << "�Ы�Enter��!\n";
  for (;;)
  { if (getch()=='\r') break; }
  end = time(NULL);
  cout << "����e��ۮt:"<<difftime(end,start)<<" ��";
  getch();
}