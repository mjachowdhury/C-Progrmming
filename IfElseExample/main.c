#include <stdio.h>
#include <stdlib.h>

int maxFinder(int num1, int num2, int num3){
    int result;

    if(num1 > num2 && num1 > 3){
        result = num1;
    } else if(num2 > num1 && num2 > num3){
        result = num2;
    }
    else{
        result = num3;
    }
    //printf("Max number is :",result);
    return result;
}
int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter first numbers : ");
    scanf("%d", &num1);

    printf("Enter Second numbers : ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);
    printf("%d , is the max number ", maxFinder(num1, num2, num3));

    return 0;
}
