#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Calculator Example\n");

    double number1;
    double number2;
    char calcualtionSign;

    printf("Enter first number : ");
    scanf("%lf", &number1);
    printf("Enter calculation sign: ");
    scanf(" %c" , &calcualtionSign);
    printf("Enter second number : ");
    scanf("%lf", &number2);

    if(calcualtionSign == '+'){
        printf("%f", number1 + number2);
    }else if(calcualtionSign == '-'){
        printf("%f", number1 - number2);
    }
    else if(calcualtionSign == '*'){
        printf("%f", number1 * number2);
    }
    else if(calcualtionSign == '/'){
        printf("%f", number1 / number2);
    }else{
        printf("Invalid calculation sign");
    }
    return 0;
}
