//malloc01.cpp
#include <iostream.h>
#include <conio.h>
#include <alloc.h>
#include <process.h>
void main()
{ char *str;
  if ((str = (char *) malloc(11)) == NULL)
  { cout << "�O���餣��\n";
    exit(1);
  }
  strcpy(str,"Nice");
  cout << "��Ƭ�:"<<str<<endl;
  free(str);
  getch();
}