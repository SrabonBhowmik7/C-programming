#include <stdio.h>

typedef struct Person {
    char name[50];
    int age ;
    int salary;

}Srabon;


int main(){

    Srabon user1;//user1 object

    printf("Give User Name : \n");
    scanf("%s",user1.name);


    printf("Give User Age : \n");
    scanf("%d",&user1.age);


    printf("Give User Salary : \n");
    scanf("%d",&user1.salary);

    printf(" Name is %s\n",user1.name);
    printf(" Age is %d\n",user1.age);
    printf(" Salary is %d\n",user1.salary);


}
