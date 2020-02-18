//ptr_fun05.cpp	以指標傳陣列
#include <iostream.h>
#include <conio.h>
const N = 5;
void get_data(int*,int);
void main()
{ int a[N],i,*ptr;
  ptr = &a[0];	//or ptr=a;
  get_data(ptr,N);
  cout << "輸入資料為:";
  for (i=0;i<N;i++)
  cout << a[i] <<" ";
  cout << endl;
  getch();
}
void get_data(int *a,int n)
{ int i;
  cout << "輸入" << n <<"筆資料:";
  for (i=0;i<n;i++)
  cin >> *(a+i);
}
