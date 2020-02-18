//str_null.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int N=5;
void main()
{ int i;
  char s[N]={'A','B','C','D','E'};			//¯Â¦r¤¸°}¦C«D¦r¦ê
  char st[N+1]={'A','B','C','D','E','\0'};//¯Â¦r¤¸°}¦C¤§¦r¦ê
  char str[]="ABCDE";
  char *string="ABCD";
  cout<<"¦r¤¸°}¦C¿é¥Xs[N]=";
  for (i=0;i<N;i++)
  cout << s[i];
  cout << endl;
  cout <<"¦r¦ê¿é¥Xst[N+1]="<< st    <<endl;
  cout <<"¦r¦ê¿é¥Xstr[]="  << str   <<endl;
  cout <<"¦r¦ê¿é¥X*string="<< string<<endl;
  getch();
}