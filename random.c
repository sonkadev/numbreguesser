#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
// változók
// g = amire a játékos gondol
// r = amire a gép gondol 
// c = konvertált g

int main(){
    
    char g[1];
    printf("gondoltam egy random szamra 1 es 50 kozott\n");
    srand(time(NULL));
    int r = rand() % 49 + 1; 
    
    while(1){
    gets(g);
    int c = atoi(g);
    if (c < r){
        printf("nagyobb\n");

    } 
        if (c > r){
        printf("kisebb\n");

    } 

        if (c == r){
        printf("ugyanaz\n");
        break;
    } 
    


    }

    
    


}
