//str_2av.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
#include <string.h>
void main()
{ char *s[4],*string;
  int i;
  string = new char[21];
  for (i=0;i<4;i++)
  { cout <<"��J4���r��(�C���̪�20�r��)��"<<i<<"��:";
    cin >> string;			//���ſ�J�ť�
    if (strlen(string)<=20)
    { s[i] = new char[strlen(string)+1];
      strcpy(s[i],string);
    }
    else i--;
  }
  cout << "��J���r��p�U:\n";
  for (i=0;i<4;i++)
  { cout << s[i] << ' ';
    delete[] s[i];
  }
  cout << endl;
  delete [] string;
  getch();
}