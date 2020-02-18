//arg.cpp
// Illustrate the use of each of the complex friend functions.
#include <complex.h>  // This also includes iostream.h.
#include <conio.h>
void main(void)
{
   complex z(3.1, 4.2);
   cout << "z = " << z << "\n";
   cout << "  has real part = " << real(z) << "\n";
   cout << "  and imaginary part = " << imag(z) << "\n";
   cout << "z has complex conjugate = " << conj(z) << "\n";

   double mag = sqrt(norm(z));
   double ang = arg(z);

   cout << "The polar form of z is:\n";
   cout << "   magnitude = " << mag << "\n";

   cout << "   angle (in radians) = " << ang << "\n";
   cout << "Reconstructing z from its polar form gives:\n";
   cout << "   z = " << polar(mag,ang) << "\n";
   getch();
}

/*Program Output

z = (3.1, 4.2)
  has real part = 3.1
  and imaginary part = 4.2
z has complex conjugate = (3.1, -4.2)
The polar form of z is:
   magnitude = 5.220153
   angle (in radians) = 0.934958
Reconstructing z from its polar form gives:
   z = (3.1, 4.2)
*/