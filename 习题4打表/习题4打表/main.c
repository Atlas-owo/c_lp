//
//  main.c
//  习题4打表
//
//  Created by Atlas.owo on 18/11/8.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
void fenge(int x);
void draw(int x,int y);
int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    int h,s;
    int i;
    for(; n > 0; n--){
        scanf("%d %d",&h,&s);
        draw(h, s);
    }
    
    return 0;
}

void fenge(int x){
    for(x = 3*x+1; x>0; x--)
        printf("-");
    printf("\n");
}

void draw(int y,int x){
    fenge(x);
    
    int k,l,m;
    for(l = 0; l < y; l++){
        for(m = 0; m < 2; m++){
            for(k = 0; k < x; k++)
                printf("|  ");
            printf("|\n");
        }
        fenge(x);
    }
}
