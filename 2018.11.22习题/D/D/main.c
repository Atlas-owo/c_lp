//
//  main.c
//  D
//
//  Created by Atlas.owo on 18/11/22.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int c(char *s);
int main(int argc, const char * argv[]) {
    int x;
    char s[1000005] = {0};
    scanf("%d",&x);
    
    
    
    for( ; x > 0; x--){
        
        scanf("%s",s);
        printf("%d\n",c(s));
    }
    
    return 0;
}

int c(char *s){
    int sum = 0;
    int i;
    for(i = 0 ; i < strlen(s); i++){
        sum += s[i]-'0';
        
    }
    
    
    
    if(sum >= 10){
        memset(s, 0, sizeof(s));
        for(i = 0 ; sum > 0; sum/=10, i++){
            s[i] = sum % 10 + '0';
        }
        return c(s);
    }
    else return sum;
}
