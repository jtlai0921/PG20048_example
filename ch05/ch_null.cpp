//ch_null.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ char ch[5]={'a','b'};		//�]�wch[0]��'a',ch[1]��'b'
  for (int i=0;i<5;i++)
  if (ch[i]!='\0')  cout << ch[i];	//�D�Ŧr���ɦC�L�Ӥ���
  else cout << 'X';		 	//�Ŧr���ɦC�L'X'
  cout << endl;
  getch();					  //�Ȱ�
}
