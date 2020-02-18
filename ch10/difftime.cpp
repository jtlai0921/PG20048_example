//difftime.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  time_t start,end;
  start = time(NULL);
  cout << "請按Enter鍵!\n";
  for (;;)
  { if (getch()=='\r') break; }
  end = time(NULL);
  cout << "按鍵前後相差:"<<difftime(end,start)<<" 秒";
  getch();
}