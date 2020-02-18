//if-if0.cpp
#include <iostream.h>	//cout,cin
#include <conio.h>		//getch()
void main()
{ char ch;
   do
   {
     cout << "块ヴ種じ:"; cin >> ch;
     if ((ch>='0'&&ch<='9')||(ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
     																//痷:计のダ
     { if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))	//痷:糶
       { cout << ch << " ダじ\n";
         if (ch>='A'&&ch<='Z')			//耞糶
         cout << ch << " 糶ダ";	//痷
         else
         cout << ch << " 糶ダ";	//安
       }
       else cout << ch << " 计じ";				//安:计
       cout << " ,ず絏" << int (ch) << endl; 		//盢ch锣俱计
     }
     else cout << ch << " 疭じ\n";				//安:疭じ
     cout << "块盾?(y/n)";
     cin >> ch;
   }while (ch!='n');
}
