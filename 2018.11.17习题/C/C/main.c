//
//  main.c
//  C
//
//  Created by Atlas.owo on 18/11/19.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int x,i,sta = 0;
    char s[55] = {0};
    scanf("%d",&x);
    for(; x > 0; x--){
        
        memset(s,'\0',sizeof(s));
        scanf("%s",s);
        
        
        if(s[0] >= 48 && s[0] <= 57){
            printf("no\n");
            continue;
        }
        
        if(s[31]!='\0'){
            printf("no\n");
            continue;
        }
        
        for(i = 0; i < strlen(s); i++){
            sta = 0;
            if(s[i] == 95)  sta = 1;
            else if(s[i] >= 48 && s[i] <= 57)   sta = 1;
            else if(s[i] >= 65 && s[i] <= 90)   sta = 1;
            else if(s[i] >= 97 && s[i] <= 122)  sta = 1;
            
            if(sta == 0)    break;
        }
        
        if(sta == 0){
            printf("no\n");
            continue;
        }
        else{
            printf("yes\n");
        }

        
    }
    return 0;
}
