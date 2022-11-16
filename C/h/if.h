#include <stdio.h>
int cif(){
    char i;
    printf("U yes Or No\n input y or n. \n");
    scanf("%c",&i");
    if(i = 'y' || i = 'Y'){
        printf("Yes Agreed.\n");
        }
    else if(i = 'n' || i = 'N'){
        printf("No Agreed.\n");
        }
    else{
        printf("input error.\n");
        }   
    return 0;
}