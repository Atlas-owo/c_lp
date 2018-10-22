//
//  main.c
//  P2141
//
//  Created by Atlas.owo on 18/10/15.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,j,k,l,count = 0;
    scanf("%d",&n);
    
    int i[n];
    int c[n];
    for(j = 0; j < n; j++){
        scanf("%d",&i[j]);
        c[j] = 0;
    }
    
    for(j = 0; j < n; j++){
        for(k = 0; k < n; k++){
            if(k == j){
                continue;
            }
            for(l = 0; l < n; l++){
                if(i[k] + i[j] == i[l] && c[l] == 0){
                    count++;
                    c[l] = 1;
                }
            }
        }
    }
    
    printf("%d\n",count);
    
    return 0;
}
