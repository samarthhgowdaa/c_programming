//Conditional operators

/*
Ternary operator

syntax:-

condition ? doSomething if true : dosomething if false ; 
*/

#include<stdio.h>
int main(){
    int age;
    printf("Age: ");
    scanf("%d", &age);
    
    age>=18 ? printf("User is an Adult") : printf("User isn't an Adult");

    return 0;
}