//ptr_fun05.cpp	�H���жǰ}�C
#include <iostream.h>
#include <conio.h>
const N = 5;
void get_data(int*,int);
void main()
{ int a[N],i,*ptr;
  ptr = &a[0];	//or ptr=a;
  get_data(ptr,N);
  cout << "��J��Ƭ�:";
  for (i=0;i<N;i++)
  cout << a[i] <<" ";
  cout << endl;
  getch();
}
void get_data(int *a,int n)
{ int i;
  cout << "��J" << n <<"�����:";
  for (i=0;i<n;i++)
  cin >> *(a+i);
}
