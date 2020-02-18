//else-if.cpp
#include <iostream.h>	//cout
#include <conio.h>		//getch()
void main()
{ short score;
  char ch;
  do
    { cout << "輸入分數:"; cin >> score;
      cout << score << "等第為->";
      if (score>=90)						//條件1
      cout << "優";
      else if (score>=80)				//條件2
           cout << "甲";
           else if (score >=70)		//條件3
                cout <<"乙";
                else if (score>=60)	//條件4
                     cout << "丙";
                     else cout << "丁";
       cout << endl;
       cout << "再輸入嗎(y/n)?"; cin >> ch;
    } while (ch!='n');
}
