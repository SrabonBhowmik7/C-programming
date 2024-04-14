#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    (*a)=(*b);
    (*b)=temp;
    printf("a value : %d, b value : %d (inside function)\n",*a,*b);
}



int main()
{
    int a , b;
    float c,d;
    a =10, b=12;


    swap(&a,&b); //& diye address pas kora hocche



    //printf("value of a is %d ,\n\naddress is %d \n\n",a,&a);

     printf("a value : %d, b value : %d ()\n\n",a,b);

     int x =12;
     int* x2 = &x;
     int* x3 =&x;
     printf("x: %d, x2:%d, x3:%d\n\n",x,*x2,*x3);

     x=25;
     printf("x: %d, x2:%d, x3:%d\n\n",x,*x2,*x3);


     int user[5]={1,2,3,4,5};
     for (int i=0;i<5;i++){
       printf("Element no: [%d] ",i);
       int temp;
       scanf("%d",&temp);
       user[i]=temp;
     }
     printf("\n\n");
     for(int i =0 ; i<5; i++){
        printf("Given user input :[%d] is %d\n \n",i,user[i]);
     }


}
