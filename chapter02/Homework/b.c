//Write a program to check if given character is digit or not

#include<stdio.h>
#include<math.h>

int main(){

    char a;
    printf("-----(To check if the character is a digit or not)-----\n");
    printf("Enter: ");
    scanf("%c", &a);
    
    //I don't know, what to do if the digit is 100 or 51 like it
    // I can set the limit to >=100 or something like that
    // but the question is on upto how many
    // is there another way?
    // So I searched and found out, it was related to some other things 
    // that I still haven't learnt yet, I'll come back once
    // I finish C
    if (a>=0 && a<=9)
    {
        printf("It is a digit");
    }
    else {
        printf("it is a character");
    }
    
    return 0;
}