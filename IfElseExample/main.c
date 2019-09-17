#include <stdio.h>
#include <stdlib.h>

int maxFinder(int num1, int num2){
    int result;

    if(num1 > num2){
        result = num1;
    } else{
        result = num2;
    }
    //printf("Max number is :",result);
    return result;
}
int main()
{
    int num1;
    int num2;

    printf("Enter first numbers : ");
    scanf("%d", &num1);

    printf("Enter Second numbers : ");
    scanf("%d", &num2);
    printf("%d , is the max number ", maxFinder(num1, num2));

    return 0;
}
