//else-if.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short score;
  char ch;
  do
    { cout << "��J����:"; cin >> score;
      cout << score << "���Ĭ�->";
      if (score>=90)						//����1
      cout << "�u";
      else if (score>=80)				//����2
           cout << "��";
           else if (score >=70)		//����3
                cout <<"�A";
                else if (score>=60)	//����4
                     cout << "��";
                     else cout << "�B";
       cout << endl;
       cout << "�A��J��(y/n)?"; cin >> ch;
    } while (ch!='n');
}
