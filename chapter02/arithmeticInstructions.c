#include<stdio.h>
#include<math.h> //Include doing arithmatic functions

int main(){
    
    //Every thing related to math
    int a = 1, b = 2;
    int sum = a + b;
    int multiply = a * b;

    //Valid              //Invalid
    int c;               //int b + c = a;
    int a = b+c;         //int a = bc;   
    int a = b*c;         
    int a = b/c;
    int a = pow(b,c);    // int a = b^c;


    return 0;
}