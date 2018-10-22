//
//  main.c
//  P1046
//
//  Created by Atlas.owo on 18/10/14.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a[10];
    int i,h,count = 0;
    
    for(i = 0; i < 10; i++){
        scanf("%d",&a[i]);
    }
    
    scanf("%d",&h);
    h += 30;
    
    for(i = 0; i < 10; i++){
        if(a[i]<=h){
            count++;
        }

    }
    
    printf("%d\n",count);
    
    return 0;
}
