#include <stdio.h>
//void display();

int n = 5;  // global variable

void display()
{
    ++n;
    printf("n = %d", n);
}


int main()
{
    ++n;
    display();
    return 0;
}

