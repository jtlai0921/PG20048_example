//ptr_pp03.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ int a[5]={10,20,30,40,50};
  int *ptr = a;
  cout <<"�U������}��:\n";
  for (int i=0;i<5;i++)
  cout <<"a["<<i<<"]="<<&a[i]<<endl;
  cout << "*ptr���e="<<*ptr<<endl;
  cout << "ptr��}="<<ptr<<endl;
  ptr++;
  cout << "ptr++�᤺�e="<<*ptr<<endl;
  cout << "ptr++���}="<<ptr<<endl;
  getch();
}
  