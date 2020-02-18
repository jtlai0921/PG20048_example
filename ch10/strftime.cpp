//strftime.cpp
#include <iostream.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  struct tm *time_now;
  time_t secs_now;
  char str[80];
  tzset();
  secs_now=time(NULL);
  time_now = localtime(&secs_now);
  strftime(str, 80,
      "現在為%I 點 %M 分 %p  %A, %B %d %Y",time_now);
  cout<<str;
  getch();
}