#include <stdio.h>
int main ()
{

    int a =5, b=7;

    a = a-b;
    b = a+b;
    a = b-a;

    printf("a = %d b = %d", a,b);
}
