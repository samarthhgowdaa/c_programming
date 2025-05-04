//Lets complicated stuff using is, else statements

#include<stdio.h>
#include<math.h>

int main(){
    
    int a;
    printf("Check if a number is odd or even: ");
    scanf("%d", &a);
    
    if (a%2==0)
    {
        printf("%d is EVEN", a);
    }
    else
    {
        printf("%d is ODD", a);
    }

    return 0;
}