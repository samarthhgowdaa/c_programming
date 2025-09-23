#include <stdio.h>
#include <stdbool.h>

// need to include this standard boolean library

int main(){
    
    //Booleans, the keyword is bool, a true or false, or 1 or 0.

    bool isOnline = 1; //1; //true; and you know the drill
    bool isStudent = 1; 

/*  
    if(isOnline){
        printf("User is ONLINE\n");
    }
    else{
        printf("User is OFFLINE\n");
    }
    
    if(isStudent){
        printf("User is a student\n");
    }
    else{
        printf("User is not a student\n");
    }
*/

    //Let's make it a bit more complicated
    // Used logic gates, which I lil knowledge about

    if (isOnline && isStudent == 1)
    {
        printf("User is a STUDENT and is ONLINE");
    }
    else if (isStudent == 0)
    {
        printf("ALERT!! User is not a student");
    }
    else{
        printf("Offline");
    }
    
    
    

    return 0;
}