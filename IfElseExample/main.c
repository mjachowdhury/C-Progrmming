#include <stdio.h>
#include <stdlib.h>

int maxFinder(int num1 , int num2){
    int result;
    if(num1 > num2){
        result = num1;
    } else{
        result = num2;
    }
    return result;
}
int main()
{
    maxFinder(45,85);
    printf("Max number is %d : \n");
    return 0;
}
