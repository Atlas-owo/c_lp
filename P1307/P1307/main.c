//
//  main.c
//  P1307
//
//  Created by Atlas.owo on 18/10/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int x,m = 0 ;
    scanf("%d",&x);
    
    while(x!=0){
        m = m*10 + x%10;
        x /=10;
    }
    
    printf("%d\n",m);
    
    return 0;
}
