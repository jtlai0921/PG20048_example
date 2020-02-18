//divid01.cpp
#include <iostream.h>	//cout,cin
#include <conio.h> 		//getch()
void main(void)
{ long divisor, dividen;
  char ch;
  do
  { cout << "輸入除數:"; cin >> divisor;
    cout << "輸入被除數:";cin >> dividen;
    if (divisor==0)
    { cout << "除數不得為0!\n";
      continue;					//回到迴圈do之開始
    }
    cout << "\n商  為:"<< dividen /divisor;
    cout << "\n餘數為:" << dividen % divisor;
    cout << "\n繼續嗎?(y/n)";
    cin >> ch;
  } while (ch!='n');
  getch();
}
