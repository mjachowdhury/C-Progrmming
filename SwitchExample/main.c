#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Switch Statement Example!\n");

    char grade = 'A';

    switch(grade){
    case 'A':
    printf("You did very well");
    break;
    case 'B':
    printf("You did well");
    break;
    case 'C':
    printf("You did ok");
    break;
    case 'D':
    printf("You did very bad");
    break;
    case 'F':
    printf("You Failed");
    break;
    default:
    printf("Invalid Grade");
    }
    return 0;
}
