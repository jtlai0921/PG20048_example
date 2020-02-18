//point_fun01.cpp
#include <iostream.h>
#include <math.h>
#include <conio.h>
double xpowy(double,double,double (*xy) (double,double));
void main()
{ double x,y;
  double (*p)(double,double);
  p = pow;		//求x之y次方
  cout << "x,y=";cin >> x >> y;
  cout << x <<"之" << y <<"次方="<< xpowy(x,y,p);
  getch();
}

double xpowy(double x,double y,double (*xy)(double,double))
{ return xy(x,y);
}
