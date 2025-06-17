#include<stdio.h>
int main(){
    
    int age;
    printf("Enter your Age: ");
    scanf("%d", &age);

    if (age>=18){
        printf("User is an Adult\n");
        printf("They can Drive and Vote\n");
    }
    else if(age>50){
        printf("User is a senior citizen\n");
    }
    else{
        printf("User is a minor\n");
    }
    
    printf("Thank you\n");
    return 0;
}