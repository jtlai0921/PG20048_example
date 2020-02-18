//asctime.cpp
#include <iostream.h>
#include <string.h>
#include <time.h>
#include <conio.h>
void main(void)
{
  tm t;
  char str[80];
  /* sample loading of tm structure  */
  t.tm_sec    = 1;  /* Seconds */
  t.tm_min    = 30; /* Minutes */
  t.tm_hour   = 9;  /* Hour */
  t.tm_mday   = 5; /* Day of the Month  */
  t.tm_mon    = 11; /* Month */
  t.tm_year   = 52; /* Year - does not include century */
  t.tm_wday   = 4;  /* Day of the week  */
  t.tm_yday   = 0;  /* Does not show in asctime */
  t.tm_isdst  = 0;  /* Is Daylight SavTime; does not show in asctime */
  /* Âà¬°¦r¦ê */
  strcpy(str, asctime(&t));
  cout << str;
  cout << asctime(&t);
  getch();
}