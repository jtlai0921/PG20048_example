//ptr_arr_adr.cpp	�C�L�}�C��}
#include <iostream.h>
#include <conio.h>
const int N = 5;
void main()
{ int a[N],i,*ptr;
  cout << "�H�}�C����:\n";
  for (i=0;i<N;i++)
  cout <<"a["<<i<<"]="<<&a[i]<<endl;
  cout << "�H����:\n";
  ptr=a;
  for (i=0;i<N;i++)
  cout <<"ptr+"<<i<<"="<<ptr++<<endl;	//��(ptr+i)
  cout << "�H�}�C�W��:\n";
  for (i=0;i<N;i++)
  cout <<"a+"<<i<<"="<<(a+i)<<endl;
  getch();
}