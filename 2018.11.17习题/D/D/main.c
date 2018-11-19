//
//  main.c
//  D
//
//  Created by Atlas.owo on 18/11/19.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//
#include <string.h>
#include <stdio.h>

char a[10050] = {0};
char b[10050] = {0};
int main(int argc, const char * argv[]) {
    int x,i,j = 0,sta = 0;
    
    scanf("%d",&x);
    for(; x>0; x--){
        scanf("%s",a);
        scanf("%s",b);
        for(j = 0,i = 0; i < strlen(a); i++){
            for(sta = 0; j < strlen(b); j++){
                if(a[i] == b[j]){
                    sta = 1;
                    break;
                }
            }
            if(sta == 0){
                printf("No\n");
                break;
            }
        }
        if(sta == 0);
        else{
            printf("Yes\n");
        }
    
    }
    return 0;
}
