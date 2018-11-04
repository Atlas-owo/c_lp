//
//  main.c
//  ASCII
//
//  Created by Atlas.owo on 18/11/2.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n[128];
    int i;
    for(i = 32; i < 128; i++){
        n[i] = i+1;
        printf("%10d%5c",n[i],n[i]);
        if(i%2 == 0)    printf("\n");
    }
    return 0;
}
