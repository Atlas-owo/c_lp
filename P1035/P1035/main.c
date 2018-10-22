//
//  main.c
//  P1035
//
//  Created by Atlas.owo on 18/10/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int k,n = 0;
    double sum = 0;     //float is a bad choice
    scanf("%d",&k);
    
    for(sum = 0; sum <= k; ){
        n++;
        sum += 1.0/n;
    }
    
    printf("%d\n",n);
    
    return 0;
}
