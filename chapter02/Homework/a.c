//Write a program to print the average of 3 numbers;

#include<stdio.h>
#include<math.h>

int main(){

    // used float because average cannot alaways be an integer, it can be decimal    
    float a,b,c;
    printf("Type the 3 numbers to be averaged: \n");
    scanf("%f %f %f",&a,&b,&c); // learnt this new method to use every user input in one function

    //scanf("%f",&b);
    //scanf("%f",&c);
    printf("Average = %.2f", (a+b+c)/3); // used %.2f to get 2 decimal points for the answer

    return 0;
}