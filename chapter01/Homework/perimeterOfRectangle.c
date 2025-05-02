#include<stdio.h>

int main (){

    float a;
    printf("Length of Rectangle: ");
    scanf("%f", &a);                    //to scan length 

    float b;
    printf("Width of Rectangle: ");
    scanf("%f", &b);                    //to scan width

    printf("Perimeter of Rectangle: %f",(a + b)*2);

    return 0;
}