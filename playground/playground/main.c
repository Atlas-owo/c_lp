//
//  main.c
//  playground
//
//  Created by Atlas.owo on 18/11/6.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

void chuli(char *s);
int xishu = 0, changshu = 0, ph = 1;

int main(int argc, const char * argv[]) {
    // insert code here...
    char s[50] = {0};
    scanf("%s",s);
    chuli(s);
    printf("%d\n",xishu);
    return 0;
}

void chuli(char *s){
    int m = 0,n = 0,x = 0;
    for( ; s[m] != '\0'; m++);
    m--;                        //m为最后一位
    if(m < 0) return;
    printf("%d\n",m);
    
    if(s[m]>='a' && s[m]<='z'){     //是未知数
        printf("d\n");
        if(m == 0)  xishu += ph;        //a
        if(s[0] == '-'){          //第一位为负
            if(m == 1){                 //-a
                xishu -= ph;
            }
            else{                       //-6a
                for(n = 1; n < m; n++){
                    x = x*10 - (s[n]-'0')*ph;
                    xishu += x;
                }
            }
        }
        if(s[0] == '+'){
            if(m == 1){                 //+a
                xishu -= ph;
            }
            
            for(n = 1; n < m; n++){
                x = x*10 + (s[n]-'0')*ph;
                xishu += x;
            }
            
        }
        else{                           //6a
            for(n = 1; n < m; n++){
                x = x*10 + (s[n]-'0')*ph;
                xishu += x;
            }
        }
    }
}
