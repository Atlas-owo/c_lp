//
//  main.c
//  P1423
//
//  Created by Atlas.owo on 18/10/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    float d,l,sum = 0;
    int n = 0;
    scanf("%f",&d);
    
    for(l = 2; sum < d; ++n, sum += l, l *= 0.98);
    
    printf("%d\n",n);
    return 0;
}
