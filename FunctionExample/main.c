#include <stdio.h>
#include <stdlib.h>

double cubeReturn(double num);

int main()
{
    printf("Cube answer is %f : ", cubeReturn(12.0));
    return 0;
}

double cubeReturn(double num){
    return num * num * num;
}
