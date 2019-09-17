#include <stdio.h>
#include <stdlib.h>

struct Phone {
    char phoneName[15];
    char phoneManufacture[20];
    double phonePrice;
    char phoneColor[10];
};
int main()
{
    printf("Struct Exaple!\n");
    //createing struct
    struct Phone phone1;
    phone1.phonePrice = 100.50;
    strcpy(phone1.phoneName, "Samsung");
    strcpy(phone1.phoneManufacture, "Samsung");
    strcpy(phone1.phoneColor, "Black");

    printf("%s Phone Name \n", phone1.phoneName);
    printf("%s Phone Manufacture \n", phone1.phoneManufacture);
    printf("%f Phone Price \n", phone1.phonePrice);
    printf("%s Phone Color \n", phone1.phoneColor);
    return 0;
}
