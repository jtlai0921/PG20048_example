//outdata.cpp
#include <iostream.h>
#include <conio.h>
char ch[5]={'A','L','L','O','Y'};
void outch();
void main()
{ outch();
  getch();
}
//outch()
void outch()
{for (int i=0;i<5;i++)
 cout << ch[i];
 cout<<endl;
} 