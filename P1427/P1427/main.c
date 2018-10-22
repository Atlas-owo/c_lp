//
//  main.c
//  P1427
//
//  Created by Atlas.owo on 18/10/14.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int i[100];
    
    int j = 0;
    
    for(; j<100; j++){
        i[j] = 0;
    }
    
    j = 0;
    
    while(1){
        scanf("%d",&i[j]);
        if(i[j] == 0){
            break;
        }
        j++;
    }
    
    
    for(j = 99; j >= 0; j--){
        if(i[j] != 0){
            printf("%d ",i[j]);
        }
    }
    
    return 0;
}
