//
//  main.c
//  P1425
//
//  Created by Atlas.owo on 18/10/3.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int i = d - b + (c-a)*60;
    int j = i/60;
    i = i-j*60;
    printf("%d %d\n",j,i);
    return 0;
}
