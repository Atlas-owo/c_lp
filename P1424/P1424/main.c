//
//  main.c
//  P1424
//
//  Created by Atlas.owo on 18/10/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,i;
    long long n,sum;
    
    scanf("%d%lld",&x,&n);
    
    for(i = 0; i < n ; ++i){
        if( (x+i)%7 == 6 || (x+i)%7 == 0){
            continue;
        }
        sum += 250;
    }
    
    printf("%lld\n",sum);
    
    return 0;
}
