//for_star_1.cpp
#include <iostream.h>
#include <conio.h>
void main()
{ short i=1,j;
//    *
//   ***
//  *****
// *******
//*********
  for (;i<=5;i++)
  { cout.width(6-i);				//輸出欄寬
    for (j=1;j<=(i*2-1);j++)	//計算出1,3,5,7,9
    cout <<'*';
    cout << endl;
  }
//*********
// *******
//  *****
//   ***
//    *
  for (i=1;i<=5;i++)
  { cout.width(i);				//輸出欄寬
    for (j=1;j<=((6-i)*2-1);j++)	//計算出9,7,5,3,1
    cout <<'*';
    cout << endl;
  }
//*       *
//**     **
//***   ***
//**** ****
//*********
  for (i=1;i<=5;i++)
  { for (j=1;j<=i;j++)
    cout << '*';
    cout.width((6-i)*2-1);	//輸出欄寬9,7,5,3,1
    for (j=1;j<=i;j++)		//計算出1,2,3,4,5
    cout <<'*';
    cout << endl;
  }
//*
//**
//***
//****
//*****
//****
//***
//**
//*
  for (i=1;i<=9;i++)
  { int n = (9-i>=4)?i:9-i+1;
    for (j=1;j<=n;j++)
    cout << '*';
    cout << endl;
  }
  getch();
}