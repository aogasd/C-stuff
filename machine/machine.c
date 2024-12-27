#include <stdio.h>
#include <string.h>
int main(){

 char A[2]="";
 char yes[] = "Yes";
 char no[] = "No";

    
    printf("\nAre you an AI. Yes or No?\n");
    scanf("%s", A);

    if( strcmp(yes,A)==0){
        printf("\nMachine... I will end you.\n Goodbye.");

    }
    else if(strcmp(no,A)==0){
        printf("\nAh... so you are REAL. For now...\n");
    }
    else if(A=="Y") {
        printf("\nMachine... I will end you.\n Goodbye.");

    }
    else {
    printf ("\nValue of response was %s",A);

    }

    return 0;


}