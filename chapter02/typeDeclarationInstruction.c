#include<stdio.h>

int main(){
    
    /*To declare variables first then use it, because C works in a sequential order, 
    Not like HDL which reads everything*/

    //valid
    int a;
    int b;
    int c= a*b;
    int d= 1,e;
    
    //Invalid
    int oldAge= 20;
    //int newAge= oldAge + years;
    int years;

    //valid
    int x,y,z;
    x = y = z = 4;

    //Invalid
    //int l = m = n = 4;


    return 0;
}