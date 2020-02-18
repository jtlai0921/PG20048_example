//to_chi.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ int i;
  for (i=0;i<=9;i++)
  { switch (i)
    { case 0:cout<<"¹s";
      case 1:cout<<"³ü";
      case 2:cout<<"¶L";
      case 3:cout<<"°Ñ";
      case 4:cout<<"¸v";break;
      case 5:cout<<"¥î";
      case 6:cout<<"³°";
      case 7:cout<<"¬m";
      case 8:cout<<"®Ã";
      case 9:cout<<"¨h";
    }
    cout << endl;
  }
  getch();
}