//
//  main.c
//  swap
//
//  Created by Atlas.owo on 18/9/27.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int a;
    double b;
    scanf("%d",&a);
    
    if(a<1000&&a>0){
        b = sqrt(a);
        printf("%f\n",b);
    }
    else{
        printf("illegal input\n");
    }
}
