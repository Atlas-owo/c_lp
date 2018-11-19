//
//  main.c
//  B
//
//  Created by Atlas.owo on 18/11/19.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
    char s[25] = {0};
    int i,a = 0,b = 0,sta = 1;
    scanf("%s",s);
    
    printf("%lu,",strlen(s));
    
    for(i = 0; i <strlen(s); i++){
        if(s[i] == '2'){
            sta = sta+1;
            if(sta == 5)    sta = 1;
            
            switch (sta) {
                case 1:
                    a-=1;
                    break;
                    
                case 2:
                    b+=1;
                    break;
                    
                case 3:
                    a+=1;
                    break;
                    
                case 4:
                    b-=1;
                    break;
                    
                default:
                    break;
            }

        }
        
        if(s[i] == '3'){
            sta = sta-1;
            if(sta == 0)    sta = 4;
            
            switch (sta) {
                case 1:
                    a-=1;
                    break;
                    
                case 2:
                    b+=1;
                    break;
                    
                case 3:
                    a+=1;
                    break;
                    
                case 4:
                    b-=1;
                    break;
                    
                default:
                    break;
            }

        }
        
        if(s[i] == '1'){
            switch (sta) {
                case 1:
                    a-=1;
                    break;
                   
                case 2:
                    b+=1;
                    break;
                
                case 3:
                    a+=1;
                    break;
                    
                case 4:
                    b-=1;
                    break;
                    
                default:
                    break;
            }
        }
    }
    
    
    if(a > 0)   printf("e");
    if(b > 0)   printf("n");
    if(b < 0)   printf("s");
    if(a < 0)   printf("w");
    
    return 0;
}
