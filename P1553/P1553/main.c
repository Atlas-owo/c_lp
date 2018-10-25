//
//  main.c
//  P1553
//
//  Created by Atlas.owo on 18/10/24.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

char* fan(char* s);
int len(char* s);

int main(int argc, const char * argv[]) {
    // insert code here...
    char a[50] = {0};
    scanf("%s",a);
    int i,kind = 0,s = 0;
    for(i = 0; i < 25; i++){
        if(a[i] == '.'){
            kind = 1;
            s = i;
        }
        else if(a[i] == '/') {
            kind = 2;
            s = i;
        }
        else if(a[i] == '%') kind = 3;
    }
    
    char a1[25] = {0}, a2[25] = {0};
    
    switch (kind) {
        case 0:
            printf("%s\n",fan(a));
            break;
            
        case 1:
            for(i = 0; i < s; i++){
                a1[i] = a[i];
            }
            
            for(i = 0,s++; i < 25; s++, i++){
                a2[i] = a[s];
            }
            fan(a1);
            fan(a2);
            while(a2[len(a2)-1] == '0'&& a2[0] != '0')    a2[len(a2)-1] = '\0';
            printf("%s.%s\n",a1,a2);
            break;
            
        case 2:
            for(i = 0; i < s; i++){
                a1[i] = a[i];
            }
            
            for(i = 0,s++; i < 25; s++, i++){
                a2[i] = a[s];
            }
            printf("%s/%s\n",fan(a1),fan(a2));
            break;
            
        case 3:
            for(i = 0; i < len(a)-1; i++){
                a1[i] = a[i];
            }
            printf("%s%%\n",fan(a1));
            break;
            
        default:
            break;
    }
    
    //printf("\n%d\n",len(a));
    //printf("%s\n",fan(a));
    return 0;
}

char* fan(char* s){
    int i,j = 1;
    int l = len(s);
    for(i = l-1; i >= 0; i--,j+=2){
        s[i+j] = s[i];
    }
    
    for(i = 0;i < l; i++){
        s[i] = s[i+l];
        s[i+l] = '\0';
    }
    while(s[0] == '0'){     //删去0开头
        for(i = 1; i < l; i++){
            s[i-1] = s[i];
        }
        s[i-1] = '\0';
        s[i] = '\0';
    }
    if(s[0] == '\0')    s[0] = '0';
    return s;
}


int len(char* s){   //输出字符串长度
    int i;
    for(i = 0; i < 25; i++){
        if(s[i] == '\0')    break;
    }
    return i;
}
