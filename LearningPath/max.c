//
//  max.c
//  LearningPath
//
//  Created by Atlas.owo on 18/9/24.
//  Copyright © 2018年 Atlas_w. All rights reserved.
//

#include <stdio.h>

int main(){
    int a = 1;
    int b = 2;
    int c = 3;
    
    int d;
    d = max(a,max(b,c));
    printf("%d\n",d);
    
    return 0;
}
int max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
