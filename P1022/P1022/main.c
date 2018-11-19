//
//  main.c
//  P1022
//
//  Created by Atlas.owo on 18/11/6.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int changshu = 0,xishu = 0,ph = 1;
void chuli(char *s);
int num(char *s);
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
    printf("%d %d\n",changshu,xishu);
    printf("%f",(float)changshu/xishu);
    return 0;

}


void chuli(char *s){
    int f = 1;
    int x = 0;
    if(s[0] < 45){
        f = (s[0] - 44) * (-1);
        int  j;
        for(j = 0; j < 50; j++){
            s[j] = s[j+1];
        }
        
    }
    
    if(s[strlen(s)-1] > 64){
        x = 1;
        s[strlen(s)-1] = '\0';
    }
    
    if(x == 1)  xishu += ph*f*num(s);
    if(x == 0)  changshu += ph*f*num(s);
    
    
}


int num(char *s){
    int i,sum = 0;
    for(i = 0; i < strlen(s); i++){
        sum *= 10;
        sum += s[i] - 48;
    }
    return sum;
}
