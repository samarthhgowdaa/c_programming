#include<stdio.h>
#include<math.h>

int main(){
    //Logical operators
    printf("%d \n", 3>4 && 2>1); //AND operator
    printf("%d \n", 3>4 || 2>1); //OR operator
    printf("%d \n", ! 3>4); //NOT operator, because not gate has only one input

    //combining two gates
    printf("%d \n", !(3>4 || 2>1));

    return 0;
}