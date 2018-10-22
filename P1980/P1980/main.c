//
//  main.c
//  P1980
//
//  Created by Atlas.owo on 18/10/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,k;
    long long i,n,m,count = 0;
    
    scanf("%lld%d",&n,&x);
    
    for(i = 1; i <= n; i++){
        m = i;
        while (m > 0) {
            
            k = m%10;
            if(k==x){
                count++;
            }
            m = m/10;
        }
    }
    printf("%lld\n",count);
    return 0;
}
