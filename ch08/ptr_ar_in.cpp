//ptr_ar_in.cpp
#include <iostream.h>
#include <conio.h>
const N = 5;
void main()
{ int a[N],*ptr,i;
  ptr = a;
  cout <<"輸入"<<N<<"筆資料:";
  for (i=0;i<N;i++)
  cin >> *(ptr+i);
  cout <<"以陣列名稱輸出:";
  for (i=0;i<N;i++)
  cout << *(a+i)<<" ";
  cout <<"\n";
  getch();
}

void display_str(char *p,char *q)
{ cout << p <<"字串有:"<<strlen(p)<<"字元\n";
  cout << q <<"字串有:"<<strlen(q)<<"字元\n";
}
