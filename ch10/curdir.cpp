//curdir.cpp
#include <dir.h>
#include <iostream.h>
#include <string.h>
#include <conio.h>
char *current_directory(char *path)
{
  strcpy(path, "X:\\");     /*�N�Ϻо��ΥD�ؿ��榡��J X:\ */
  path[0] = char('A' + getdisk());//���o�ثe�Ϻо��è��NX
  getcurdir(0, path+3);  //�N�ثe���|��J�r��ĥ|�Ӧ�m�}�l
  return(path);
}
void main(void)
{
  char curdir[MAXPATH];  //�]�w���w�̤j���|��
  cout << "MAXPATH="<<MAXPATH<<endl;
  current_directory(curdir);	//�I�s��ƨ��o�ثe���|
  cout<<"�ثe���|��:"<<curdir<<endl;
  char cwd[MAXPATH];
  getcwd(cwd,MAXPATH);
  cout<<"�Hgetcwd���o���u�@���|��:"<<cwd<<endl;
  getch();
}