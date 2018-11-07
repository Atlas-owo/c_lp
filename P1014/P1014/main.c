//
//  main.c
//  P1014
//
//  Created by Atlas.owo on 18/11/5.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n;
    scanf("%d",&n);
    
    int i = 0;
    for(; i < n; i++){
        n -= i;
    }
    
    
    
    if(i%2 == 1)    printf("%d/%d\n",i+1-n,n);
    else    printf("%d/%d\n",n,i+1-n);
    return 0;
}
