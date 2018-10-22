//
//  main.c
//  P1200
//
//  Created by Atlas.owo on 18/10/16.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

char a[6],b[6];
char c[] = {"V"};

int main() {
    
    gets(a);
    while(b[0] == '\0'){
        gets(b);
    }
    
    int i,j = 1,k = 1;
    for(i = 0; i < 6; i++){
        if(a[i] > 64 && a[i] < 64 + 26 +2){
            j *= a[i] - 64;
        }
        if(b[i] > 64 && b[i] < 64 + 26 +2){
            k *= b[i] - 64;
        }
    }
    
    if(strcmp(a,c) == 0){
        printf("GO\n");
        return 0;
    }
    
    if(j%47 == k%47){
        printf("GO\n");
    }
    else{
        printf("STAY\n");
        //printf("%d %d\n",j,k);
    }
    
    return 0;
}
