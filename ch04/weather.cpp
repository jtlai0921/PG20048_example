//weather.cpp
#include <iostream.h>
#include <conio.h>
#include <stdlib.h>	//randomize(),random
void main()
{ int weather;
  cout << "�Ѯ�(0,1)=";	//0:�n,1:�B
  cin >> weather;
  if (weather)				//weather==1
  { cout << "�ݹq�v�h,�h�ֿ�?";
    int money;
    cin >> money;
    if (money>=1000)
    cout << "����\n";
    else
    cout << "������\n";
  } else
  { cout <<"���C�h,��q�u��(0,1)="; //0:���� 1:����
    int tool;
    cin >> tool;
    if (tool)
    cout << "�M����\n";
    else
    cout <<"�f����\n";
  }
  getch();
}      