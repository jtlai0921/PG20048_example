//firstnext.cpp
#include <iostream.h>
#include <dir.h>
#include <conio.h>
#include <iomanip.h>	//setw()
void main(void)
{
   struct ffblk file;
   int done;
   cout<<"�C�X�Ҧ��ɮ�[*.cpp]�Τj�p:\n";
   done = findfirst("*.cpp",&file,0);
   while (!done)
   {
      cout<<setw(20)<<file.ff_name	//�ɦW
          <<setw(6)<<file.ff_fsize<<" bytes"	//�ɮפj�p
          <<endl;
      done = findnext(&file);	//�U�@���ɮ�
   }
   getch();
}
