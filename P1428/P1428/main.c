//
//  main.c
//  P1428
//
//  Created by Atlas.owo on 18/10/15.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int i[100][2];
    int n,j,k;
    
    scanf("%d",&n);
    
    for(j = 0; j < n; j++){
        scanf("%d",&i[j][0]);
        i[j][1] = 0;
    }
    
    for(j = 0; j < n; j++){
        for(k = 0; k < j; k++){
            if(i[k][0]<i[j][0]){
                i[j][1]++;
            }
        }
    }
    
    for(j = 0; j < n; j++){
        printf("%d ",i[j][1]);
    }

    
    return 0;
}
