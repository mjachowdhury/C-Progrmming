#include <stdio.h>
#include <stdlib.h>

double cubeReturn(int num){
    return num * num * num;
}
int main()
{
    printf("Cube answer is %f : ", cubeReturn(12));
    return 0;
}
