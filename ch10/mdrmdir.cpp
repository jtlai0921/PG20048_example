//mdrmdir.cpp
#include <iostream.h>
#include <stdio.h>	//perror
#include <conio.h>	//getch()
#include <process.h>	//system
#include <dir.h>
#define DIRNAME "testdir.$$$"
void main(void)
{   int stat;
    stat = mkdir(DIRNAME);	//�b�ثe�ؿ��U�ؤ@�ؿ�
    if (stat==0)
      cout <<DIRNAME<<"�ؿ��إ�OK!\n";
    else
    { cout<<"�L�k�إߥؿ�\n";
      exit(1);
    }
    getch();			 //�Ȱ�
    system("dir/ad");  //��ܥؿ��ɮ�
    getch();          //�Ȱ�
    stat = rmdir(DIRNAME);  //�����ؿ�
    if (stat==0)
      cout <<DIRNAME<<"�ؿ��w�R��\n";
    else
    { perror("\n�L�k�R���ؿ�\n");
      exit(1);
    }
    getch();
}
