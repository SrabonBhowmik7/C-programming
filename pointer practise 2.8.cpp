
#include <stdio.h>
int main()
{

    int x = 10;

    int y;
    int *p, *q;


    //printf("value of x : %d \n",x);
      //printf("address of x : %p \n",&x);
      // printf("address of y : %p \n",&y);

    p = &x;
    q = &y;

    y=*p;

    *p = 15;
    *q = 20;



    printf("value of x : %d\n", x);
    printf("value of y : %d\n", y);

    printf("value of *p : %d\n", *p);

    printf("value of *q : %d\n", *q);



}
