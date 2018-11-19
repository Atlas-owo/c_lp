//
//  main.c
//  习题4
//
//  Created by Atlas.owo on 18/11/8.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    char c[10] = {0};
    scanf("%s %d",c,&n);
    int i = 1,j = 1;
    if(c[0] == 't'){
        for(; i <= n; i+=2){
            for(j = 1; j<=i; j++){
            printf("*");
            }
            printf("\n");
        }
        
        for(i-=4; i > 0; i-=2){
            for(j = 1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }

    }
    
    if(c[0] == 'd'){
        for(; i <= n; i+=2){
            for(j = 1; j<=(n-i)/2; j++){
                printf(" ");
            }

            for(j = 1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }
        
        for(i -= 4; i > 0; i-=2){
            for(j = 1; j<=(n-i)/2; j++){
                printf(" ");
            }

            for(j = 1; j<=i; j++){
                printf("*");
            }
            printf("\n");
        }
        
    }

    
    return 0;
}
