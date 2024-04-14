#include <stdio.h>

int main(){

int i , n, result;

scanf("%d",&n);
result = 0;
for(i =0; i<n; i++)
{
    result = result + i;
    printf("value of i = %d, value of result =%d\n\n",i,result);
}
printf("result = %d\n\n",result);




}
