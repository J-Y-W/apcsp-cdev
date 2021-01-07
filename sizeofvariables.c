#include<stdio.h>

int main()
{
  int a = 545;
  char b = 'b';
  float c = 1.23;
  double d = 123.456;
  unsigned int e = 12;
  signed int f = -3;
  // print value and size of an int variable
  printf("int a value: %d and size: %lu bytes\n", a, sizeof(a));
  // print value and size of a char variable
  printf("char b value: %c and size: %lu bytes\n", b, sizeof(b));
  // print value and size of a float variable
  printf("float c value: %f and size: %lu bytes\n", c, sizeof(c));
  // print value and size of a double variable
  printf("double d value: %f and size: %lu bytes\n", d, sizeof(d));
  // print value and size of an unsigned int variable
  printf("unsigned int e value: %d and size: %lu bytes\n", e, sizeof(e));
  // print value and size of a signed int variable
  printf("signed int f value: %d and size: %lu bytes\n", f, sizeof(f));
}
