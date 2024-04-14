#include <stdio.h>


void linear_search (int A[],int n,int x)
{

    int i;
    for(i=0;i<n;i++){
        if(A[i] == x){
            //return i;
            printf("number found %d = %d", A[i],x);
            return;
    }

        }

    printf("not found");
}

int main()
{
    int A[100];
    int n;
    printf("total number");
    scanf(" %d",&n);
    printf("input the number serially ");
        for(int i =0; i<n; i++){
        scanf(" %d",&A[i]);
       // printf("%d",A[i]);
    }
    int findnum;
    printf("give find num");
    scanf("%d",&findnum);

    linear_search(A, n, findnum);

}
