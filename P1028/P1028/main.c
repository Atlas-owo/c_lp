//
//  main.c
//  P1028
//
//  Created by Atlas.owo on 18/10/18.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int f(int x);

int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",f(n));
    
    return 0;
}

int f(int x){
    
    if(x == 1 || x == 0){
        return 1;
    }
    int i = x/2;
    int sum = 0;
    for(; i > 0; i--){
        sum += f(i);
    }
    
    return sum + 1;
    
}
