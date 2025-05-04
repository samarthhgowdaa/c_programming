//Write a program to print the smallest number

/*I put in a lot of thought, do this question want me to
choose a smallest number among a group of numbers of just 2 numbers
At my current skilll level I can only do it with 2 numbers,
so Here I go*/

#include<stdio.h>
#include<math.h>

int main (){
    
    float a,b;
    printf("Which is the smallest number: \n");
    scanf("%f %f",&a,&b);
    if (a<b)
    {
        printf("%f is the smallest number", a);
    }
    else if (b<a)
    {
        printf("%f is the smallest number", b);
    }
    else
    {
        printf("Both are equal");
    }
    
}