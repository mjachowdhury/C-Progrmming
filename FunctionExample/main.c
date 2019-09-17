#include <stdio.h>
#include <stdlib.h>

double cubeReturn(int num){
    double result = num * num * num;
    return result;
}
int main()
{
    printf("Cube answer is %f : ", cubeReturn(12));
    return 0;
}
