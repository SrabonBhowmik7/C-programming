#include <stdio.h>
int main ()
{

    int a[50], i, a_size, Position, num;
    printf("give the size of array ");
    scanf("%d",&a_size);
    printf("give the elements of array ");
    for( i=0 ; i<a_size; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("give  the position to insert a num \n");
    scanf("%d",&Position);

    printf("give the number to be inserted \n");
    scanf("%d",&num);

    for(i=a_size-1; i>=Position-1; i--)
    {
        a[i+1]=a[i];

    }
    a[Position-1]=num;
    a_size++ ;

    printf("present condition of array = \n");

    for(i =0; i<a_size; i++)
    {
        printf("%d\n",a[i]);

    }
}
