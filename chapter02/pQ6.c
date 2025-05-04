// Write a program to check if a number is odd or even

#include<stdio.h>
#include<math.h>

int main(){
    //simple version
    int a;
    printf("Check if a number is odd or even: ");
    scanf("%d", &a);
    printf("(prints 1 for even and 0 for odd)\n");
    printf("----- %d -----", a%2==0);

    return 0;
}