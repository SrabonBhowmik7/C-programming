#include <stdio.h>
#include <stdbool.h>

#define Number 46
int main()
{

    int integer;
    scanf("");
    printf("hello world \n");
    char nameInitial='z';

    float floatnumber;
    double doublenumber;
    bool iAmAstudent = true;

    /*int result ;*/
    int a=46, b=9;
    float result = a/b;
    printf("result = %f \n",result);

    result+=2;

    printf("result updt = %f \n",result);
    printf("result updt = %f \n",result++);
    printf("result updt = %f \n",result);


   //printf("done");
    //while(true){
        //printf("go to hell \n");
   // }
    if(a!=Number){
        printf("%d not equal to %d \n\n",a,Number);
    }
    else{
        for(int i =0; i<10; i++){
            printf("%d equals to %d \n\n",a,Number);
        }

    }

    int counter=0;
    while(counter<10){
        printf("go to hell %d\n\n",counter);
         ++counter;
    }

    do{
        printf("go to hell updt %d\n\n",counter);
         ++counter;
    }  while(counter<10);

    for(int i=1; i<10; i++){

        if(i==4){
            continue;
        }
        printf("go to hell for %d\n\n",i);
    }
    int usernum ;
    scanf("%d",&usernum);
    switch(usernum){

    case 35:
        printf("You are 35");
        break;

    case 36:
        printf("You are 36");
        break;

    case 37:
        printf("You are 37");
        break;

    default:
        printf("invalid num");
        break;



    }


    return 0;
}
