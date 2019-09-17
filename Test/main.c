#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[20];
    int age;
    printf("Enter you name please: \n");
    fgets(name, 14, stdin);
    //scanf("%s", name);
    printf("Enter you age please: \n");
    scanf("%d", &age);
    saySalam(name, age);
    return 0;
}

void saySalam(char name [], int age){
    printf("As Salamu Alykum \n");
    printf("How are you %s , you are %d  years old\n", name, age);

}
