//ptr_pp04.cpp
#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{ char s[10]="Morning";
  char *p = s;
  cout << "�@����X:"<<p<<endl;
  cout << "�@�Ӥ@�Ӧr����X:";
  for (int i=0;i<strlen(s);i++)
  cout << *p++;
  cout << endl;
  int a[5]={10,20,30,40,50};
  int *ptr = a;
  cout <<"�̪�ptr��}:"<<ptr<<endl;
  cout <<"��ư}�C��X:";
  for (int i=0;i<5;i++)
  cout << *ptr++ <<' ';
  cout << endl;
  ptr--;
  cout << "�̫�ptr��}:"<<ptr<<endl;
  getch();
}
  