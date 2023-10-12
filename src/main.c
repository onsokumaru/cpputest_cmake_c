/* file: main.cc */

#include <stdio.h>
#include "cpputest_cmake_mult.h"

int main (int argc, char *argv[])
{
  int a, b;
  float c, d;
  double e, f;
  a = 10 , b = 20;
  c = 100.0, d = 200.0;
  e = 1000.0, f = 2000.0;

  printf("The product of %d and %d is: %d\n", a, b, imult(a, b));
  printf("The product of %.2f and %.2f is: %.2f\n", c, d, fmult(c, d));
  printf("The product of %.2f and %.2f is: %.2f\n", e, f, dmult(e, f));

  return 0;
}
