//ptr_arr_adr.cpp	列印陣列位址
#include <iostream.h>
#include <conio.h>
const int N = 5;
void main()
{ int a[N],i,*ptr;
  cout << "以陣列元素:\n";
  for (i=0;i<N;i++)
  cout <<"a["<<i<<"]="<<&a[i]<<endl;
  cout << "以指標:\n";
  ptr=a;
  for (i=0;i<N;i++)
  cout <<"ptr+"<<i<<"="<<ptr++<<endl;	//或(ptr+i)
  cout << "以陣列名稱:\n";
  for (i=0;i<N;i++)
  cout <<"a+"<<i<<"="<<(a+i)<<endl;
  getch();
}