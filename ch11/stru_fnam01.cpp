//stru_fnam01.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
struct rec
{ int x,y;
};
rec get_rec();	//�쫬
void main()
{ rec a;
  a = get_rec();			//�t�m�O����
  cout << "a.x="<<a.x<<endl
       << "a.y="<<a.y<<endl;
  getch();
}
rec get_rec()
{ rec t;
  t.x = 80;
  t.y = 77;
  return t;
}  
