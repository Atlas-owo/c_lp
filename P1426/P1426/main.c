//
//  main.c
//  P1426
//
//  Created by Atlas.owo on 18/11/5.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int x,s;
    scanf("%d %d",&s,&x);
    int i;
    double j = 7;
    for(i = 0; i < s-x; i++){
        i += j;
        j *= 0.98;
    }
    
    if(i+j > s+x)   printf("n\n");
    else    printf("y\n");
    
    return 0;
}
