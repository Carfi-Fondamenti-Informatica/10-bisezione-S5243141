#include <iostream>
#include <math.h>
using namespace std;

float f (float n) {
   float y;
   y = (pow(n,2)) * (cos(n)) + 1;
   return y;
}

int main() {
   float a, b, x, error;
   do {
      cout << "inserire estremi" <<endl;
      cin >> a >> b;
   } while ( f(a)*f(b)>=0 || a>b );
   
   do {
      x = (a+b)/2;
      if (f(x)==0.0) {
         break;
      } else if (f(a)*f(x)>0) {
         a=x;
      } else {
         b=x;
      }
      error = abs((b-a)/2);
   } while ( error > 1e-6);
   
   cout << int(x*10000)/10000.0 <<endl;
   
   return 0;
}
         
