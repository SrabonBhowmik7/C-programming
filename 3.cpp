
#include <stdio.h>

int addFunction(int a,int b ){
    int result = a+b;
    printf("%d \n\n",result);

    return result;
}

int multiply (int a)
{
    int b = a*5;
    printf("value of b = %d\n\n",b);

}

int main(){
   // addFunction();
    int a = addFunction(5,8);
    multiply(a);

    int x =10, y=12;
    printf("value of x = %d Address of x = %d",x,&x);

}
