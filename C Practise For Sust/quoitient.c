#include <stdio.h>
int main()
{

    int a= 7;
    int b = 5;
    int quotient , remainder;
    remainder = a%b;
    quotient = a/b;
    printf("remainder is %d \n",remainder);
    printf("quoitient is %d \n",quotient);
    if (remainder > 0)
    {
        printf("ok ");
    }
}
