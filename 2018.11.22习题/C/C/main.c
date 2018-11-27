//
//  main.c
//  C
//
//  Created by Atlas.owo on 18/11/22.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <math.h>

float q(int n, float x);

int main(int argc, const char * argv[]) {
    int x;
    scanf("%d",&x);
    
    
    int n;
    float a;
    for( ; x > 0; x--){
        scanf("%d %f",&n,&a);
        printf("%.3f\n",q(n,a));
    }
    return 0;
}

float q(int n, float x){
    if(n == 1)  return sqrt(1+x);
    else    return sqrt(n+q(n-1,x));
    
}
