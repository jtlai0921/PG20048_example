//stru_fnam02.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
struct rec
{ int x,y;
};
rec *get_rec();	//�쫬
void main()
{ rec *a;
  a = get_rec();			//�t�m�O����
  cout << "a->x="<<a->x<<endl
       << "a->y="<<a->y<<endl;
  delete a;
  getch();
}
rec *get_rec()
{ rec *t = new rec;
  t->x = 80;
  t->y = 77;
  return t;
}
