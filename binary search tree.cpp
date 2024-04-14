#include <stdio.h>

int binary_search1 (int A[], int n, int x)
{
    int left, right , mid ;
    left =0;
    right =n-1;
    while (left <= right){
        mid = (left+right)/2;
        if(A[mid] == x){
            //return mid;
            printf("number found in index    %d",A[mid]);
            return mid;
        }
        if (A[mid]<x){
            left = mid+1;
        }
        else {
            right =  mid -1;
        }
    }
    printf("not found");
    //return -1;
}



int main()
{
    int A[100];
    int n;
    printf("total number    ");
    scanf(" %d",&n);
    printf("input the number serially    ");
        for(int i =0; i<n; i++){
        scanf(" %d",&A[i]);
       // printf("%d",A[i]);
    }
    int findnum;
    printf("give find num   ");
    scanf("%d",&findnum);

   int result =  binary_search1(A, n, findnum);

}
