//
//  main.c
//  P1047
//
//  Created by Atlas.owo on 18/10/14.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int length, s;
    int a,b;
    scanf("%d%d",&length,&s);
    
    int r[length+1];
    
    for(a = 0; a <= length; a++){
        r[a] = 0;
    
    }
    
    for(; s > 0; s--){
        scanf("%d%d",&a,&b);
        for( ; a <= b; a++){
            r[a] = 1;
        }
    }
    
    for(a = 0, b = 0; a <= length; a++){
        //printf("%d\n",r[a]);
        if(r[a]==0){
            b++;
        }
    }
    
    printf("%d\n",b);
    
    return 0;
}
