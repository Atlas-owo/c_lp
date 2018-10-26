//
//  main.c
//  P1598
//
//  Created by Atlas.owo on 18/10/25.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    char a[4][105] = {0};
    int s[26] = {0};

    int i,j,count;
    for(i = 0; i < 4; i++){
        gets(a[i]);
    }
    
    for(i = 0; i < 4; i++){
        for(j = 0; j < 105; j++){
            if(a[i][j] >= 'A' && a[i][j] <= 'Z'){
                s[a[i][j]-'A']++;
            }
        }
    }
    
    for(count = 0,i = 0; i < 26; i++){
        if(s[i] > count)    count = s[i];
    }
    
    for(; count > 0; count--){
        for(i = 0; i < 26; i++){
            if(count == s[i]){
                printf("*");
                s[i]--;
            }
            else{
                printf(" ");
            }
            
            if(i == 25){
                printf("\n");
            }
            else printf(" ");
        }
    }
    for(i = 'A'; i < 'Z'; i++){
        printf("%c ",i);
    }
    printf("Z");
    
    return 0;
}
