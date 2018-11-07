//
//  main.c
//  P1022
//
//  Created by Atlas.owo on 18/11/6.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int changshu = 0,xishu = 0,ph = 1;
void chuli(char *s);
int main(int argc, const char * argv[]) {
    
    char r[100] = {0};
    char s[50] = {0};
    
    scanf("%s",r);
    int i = 0,j = 0,k = 0;
    while (r[i] != '\0') {
        if(r[i] == '+' || r[i] == '-'){
            for( ; j < i; j++, k++){
                s[k] = r[j];
            }
            chuli(s);
            k = 0;
            memset(s,0,50);
        }
        
        if(r[i] == '=') {
            for( ; j < i; j++, k++){
                s[k] = r[j];
            }
            chuli(s);
            ph = -1;
            k = 0;
            memset(s,0,50);
            i++;j++;
            continue;
        }
        
        i++;
    }
    
    
    for( ; j < i; j++, k++){                //最后一个值
        s[k] = r[j];
    }
    chuli(s);
    printf("%f",(float)changshu/xishu);
    return 0;

}


void chuli(char *s){
    int m = 0,n = 0,x = 0;
    for( ; s[m] != '\0'; m++);
    m--;                        //m为最后一位
    if(m < 0) return;
    printf("%d\n",m);
    
    if(s[m]>='a' && s[m]<='z'){     //是未知数
        printf("d");
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

