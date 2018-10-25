//
//  main.c
//  prime
//
//  Created by Atlas.owo on 18/10/25.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n,y,r,is = 0,i,sum = 0;
    int yue[13] = {31,28,31,30,31,30,31,31,30,31,30,31,29};
    scanf("%d %d %d",&n,&y,&r);
    
    
    if(n%4 == 0){
        if(n%100 == 0 && (n/100)%4 != 0){
            is = 0;
        }
        is = 1;
    }
    
    for(i = 0; i < y-1; i++){
        if(is == 1 && i == 1){
            sum += yue[12];
            continue;
        }
        sum += yue[i];
    }
    
    printf("%d\n",sum+r);
    return 0;
}
