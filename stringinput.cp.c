#include <stdio.h>
int main()
{

    char name [50];
    scanf("%s", name);
    printf("%s\n",name);
    printf("string length %d", strlen(name));

    char name2[100];
    strcpy(name2,name);
    printf("\n");
    puts(name2);
}
