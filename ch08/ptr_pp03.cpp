//ptr_pp03.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a[5]={10,20,30,40,50};
  int *ptr = a;
  cout <<"各元素位址為:\n";
  for (int i=0;i<5;i++)
  cout <<"a["<<i<<"]="<<&a[i]<<endl;
  cout << "*ptr內容="<<*ptr<<endl;
  cout << "ptr位址="<<ptr<<endl;
  ptr++;
  cout << "ptr++後內容="<<*ptr<<endl;
  cout << "ptr++後位址="<<ptr<<endl;
  getch();
}
  