//stru_fnam03.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
const int N=3;
struct rec
{ int x,y;
};
rec *get_rec(int);	//原型
void main()
{ rec *a[N];
  int i;
  for (i=0;i<3;i++)
  a[i] = get_rec(i);			//配置記憶體
  for (i=0;i<N;i++)
  {
  cout << "a["<<i<<"]->x="<<a[i]->x<<' '
       << "a["<<i<<"]->y="<<a[i]->y<<endl;
  }
  for (i=0;i<3;i++)
  delete a[i];
  getch();
}
rec *get_rec(int i)
{ rec *t = new rec;
  t->x = (i+1)*5;
  t->y = (i+2)*4;
  return t;
}
