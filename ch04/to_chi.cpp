//to_chi.cpp
#include <iostream.h>	//cin,cout
#include <conio.h>		//getch()
void main()
{ int i;
  for (i=0;i<=9;i++)
  { switch (i)
    { case 0:cout<<"�s";
      case 1:cout<<"��";
      case 2:cout<<"�L";
      case 3:cout<<"��";
      case 4:cout<<"�v";break;
      case 5:cout<<"��";
      case 6:cout<<"��";
      case 7:cout<<"�m";
      case 8:cout<<"��";
      case 9:cout<<"�h";
    }
    cout << endl;
  }
  getch();
}