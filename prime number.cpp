#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ifPrime (int num)
{
    int sqroot = (int) sqrt ((double)num);
    for (int i=2; i<=sqroot; i++)
    {

        if(num%i ==0)
        {
            return false;
        }
    }
    return true ;

}


void generatePrime (int num)
{

    printf("generated prime numbers untill %d \n\n",num );
        int count =0;
           for (int i =2; i<=num ; i++)
{
            if (ifPrime(i)){
                    count ++;
                printf("%d : %d \n\n",count ,i);
            }
}

printf("\n\n total primes found until %d is %d",num,count);

}


int main()
{

    printf("input the range of your number : ");
    int userinput;
    scanf("%d",&userinput);
    generatePrime(userinput);

}
