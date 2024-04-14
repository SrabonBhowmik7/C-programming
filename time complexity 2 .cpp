
#include <stdio.h>

int main(){

int i , n, result;

scanf("%d",&n);
result = 0;
for(i =0; i<n; i++)
{
    for(int j =0; j<n; j++){
        result = result + 1;
    printf("value of i = %d, value of j = %d, value of result =%d\n\n",i,j,result);
    }

}
//printf("result = %d\n\n",result);
printf("n value = %d, result =%d",n,result);




}
