#include<stdio.h>
#include<math.h>
int main(){
    
    int a;
    printf("Enter the number to check the divisibility by 2: ");
    scanf("%d",&a);
    
    //making things complicated is what I do for living 
    if (a%2 == 0)
    {
        printf("%d is divisible by 2", a);
    }
    else
    {
        printf("%d is not divisible by 2", a);
    }
    
    return 0;
}