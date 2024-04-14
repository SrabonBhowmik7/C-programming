#include <stdio.h>

int main()
{

    int x =10;

    int *p;
    printf("value of x: %d \n",x);
    p = &x; //p er majhe x er address.

    printf("UP value of p*: %d adress of p: %p\n",*p,p);

    *p = 20; // p pointer p variable er adresss e value 20

    printf("value of p*: %d adress of p: %p\n",*p,p);


s
    printf("value of x: %d \n",x);

    x =15;

    printf("value of x: %d \n",x);
    printf("value stored at location %p is %d \n",p ,*p);
   // printf("add of x %p \n",&x);
    //printf("add of p %p",p);

    // both are same
    printf("address of x: %p\n", &x);
    printf("Value of p : %p\n",p);

}
