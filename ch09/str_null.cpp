//str_null.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
const int N=5;
void main()
{ int i;
  char s[N]={'A','B','C','D','E'};			//�¦r���}�C�D�r��
  char st[N+1]={'A','B','C','D','E','\0'};//�¦r���}�C���r��
  char str[]="ABCDE";
  char *string="ABCD";
  cout<<"�r���}�C��Xs[N]=";
  for (i=0;i<N;i++)
  cout << s[i];
  cout << endl;
  cout <<"�r���Xst[N+1]="<< st    <<endl;
  cout <<"�r���Xstr[]="  << str   <<endl;
  cout <<"�r���X*string="<< string<<endl;
  getch();
}