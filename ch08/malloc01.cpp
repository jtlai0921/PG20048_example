//malloc01.cpp
#include <iostream.h>
#include <conio.h>
#include <alloc.h>
#include <process.h>
void main()
{ char *str;
  if ((str = (char *) malloc(11)) == NULL)
  { cout << "記憶體不足\n";
    exit(1);
  }
  strcpy(str,"Nice");
  cout << "資料為:"<<str<<endl;
  free(str);
  getch();
}