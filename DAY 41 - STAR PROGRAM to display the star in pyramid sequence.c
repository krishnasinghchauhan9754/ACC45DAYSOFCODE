#include<stdio.h>


void main() {




    int i = 0;
    
    int j = 0;

    for(i = 0; i <= 10 ; i++) {
        
        for(j = 0; j <= i; j++) {
            
            printf("* ");
        }
        
        printf("\n");
        
    }
}