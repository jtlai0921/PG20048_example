//typedef02.cpp
#include <iostream.h>
#include <conio.h>
typedef struct {
  char s[80];
}str80;
struct ax {
  int a[20];
};
typedef ax a20;	//���w���A
void main()
{ str80 s1;
  cout <<"s1=";
  cin.getline(s1.s,80); //�H���B�z
  cout << s1.s << endl;
  a20 p;
  for (int i=0;i<20;i++)
  { p.a[i] = i+1;			//�H���B�z
    cout << p.a[i] <<' ';
  }
  getch();
}

