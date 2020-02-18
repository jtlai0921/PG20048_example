//ptr_pp02.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char s[10]="Morning";
  char *ptr = s;
  cout << "ptr原始內容="<<ptr<<endl;
  ptr++;
  cout << "ptr++後內容="<<ptr<<endl;
  getch();
}
  