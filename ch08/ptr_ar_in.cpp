//ptr_ar_in.cpp
#include <iostream.h>
#include <conio.h>
const N = 5;
void main()
{ int a[N],*ptr,i;
  ptr = a;
  cout <<"��J"<<N<<"�����:";
  for (i=0;i<N;i++)
  cin >> *(ptr+i);
  cout <<"�H�}�C�W�ٿ�X:";
  for (i=0;i<N;i++)
  cout << *(a+i)<<" ";
  cout <<"\n";
  getch();
}

void display_str(char *p,char *q)
{ cout << p <<"�r�꦳:"<<strlen(p)<<"�r��\n";
  cout << q <<"�r�꦳:"<<strlen(q)<<"�r��\n";
}
