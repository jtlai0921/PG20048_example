//object03.cpp
#include <iostream.h>
#include <conio.h>
class  Total_Ave
{ private:
   int  a[5],total;
   float  ave;
  public:
    void get_array()
    { total=0;
      cout << "��J5�Ӹ��=";
      for (int n=0;n<5;n++)
      { cin >> a[n];
        total += a[n];
      }
      ave = total /5.0;
     }
    void list_data()
    { cout <<"�`��="<<total<<endl;
      cout <<"����="<<ave<<endl;
    }
    int get_max()
    { int max=a[0];
      for (int i=1;i<5;i++)
      if (a[i]>max) max = a[i];
      return max;
    }
    int get_min()
    { int min=a[0];
      for (int i=1;i<5;i++)
      if (a[i]<min) min = a[i];
      return min;
    }
};


void main()
{ Total_Ave array;	 //����ŧi
  array.get_array();  //�I�s������ƨÿ�J���
  array.list_data();  //��X���
  cout <<"�̤j��="<< array.get_max()<<endl;   //�I�s�C�X�̤j��
  cout <<"�̤p��="<< array.get_min()<<endl;   //�I�s�C�X�̤p��
  getch();
}