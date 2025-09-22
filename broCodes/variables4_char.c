#include <stdio.h>

int main(){

    //Let's use char to use characters in our code

    char grade = 'A';
    char symbol = '!';

    //these are strings, a number of characters grouped together
    
    char name[] = "samarth";
    char food[] = "Chapathi";

    printf("User's grade is %c\n", grade);
    printf("Everyone is surprised %c\n", symbol);

    printf("User's name is %s \n", name);
    printf("User's favourite food is %s \n", food);

    return 0;
}