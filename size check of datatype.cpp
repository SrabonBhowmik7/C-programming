#include <stdio.h>
int main() {
  short a;
  long b;
  long long c;
  long double d;
  //char chr;

  printf("size of short = %d bytes\n", sizeof(a));
  printf("size of long = %d bytes\n", sizeof(b));
  printf("size of long long = %d bytes\n", sizeof(c));
  printf("size of long double= %d bytes\n", sizeof(d));
  char chr;
  scanf(" %c",&chr);
  printf("%d",chr);


  return 0;
}
