//
//  main.c
//  P1008
//
//  Created by Atlas.owo on 18/10/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int check(int x);
    int i;
    for(i = 100; i <= 333; i++){
        if(check(i)==1){
            printf("%d %d %d\n",i,i*2,i*3);
        }
    }
    
    return 0;
}
int check(int x){
    int k,j;
    int w[9];
    for(k = 0; k < 3; k++){
        w[k*3] = (k+1)*x/100;
        w[k*3+1] = (k+1)*x%100/10;
        w[k*3+2] = (k+1)*x%10;
    }
    
    /*
    for(k = 0; k < 9; k++){
        printf("%d ",w[k]);
    }
    printf("\n");
    */
    
    for(k = 0; k < 9; k++){
        for(j = 0; j < 9; j++){
            if(w[k] == w[j] && k != j){
                return 0;
            }
        }
        if(w[k] == 0){
            return 0;
        }
    }
    
    return 1;
    
}
