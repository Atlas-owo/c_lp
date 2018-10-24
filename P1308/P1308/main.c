//
//  main.c
//  P1308
//
//  Created by Atlas.owo on 18/10/23.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//
#include <string.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char s[1000009] = {0};
    char a[100] = {0},c[100] = {0};
    
    int i = 0, j = 0,k = 0,is = 1;
    int count = 0, place = 0;
    
    scanf("%s",a);
    
    for(i = 0; i < 100; i++){   //大写化
        if(a[i]>='a'&&a[i]<='z')    a[i] = toupper(a[i]);
    }
    i = 0;
    //printf("%s\n",a);
    
    getchar();  //重要：吃掉\n
    
    while((s[i] = getchar()) != '\n'){
        i++;
    }
    
    for(i = 0; i < 1000009 ; i++,j++){  //i为当前位置 j为单词长度
        if(s[i]>='a'&&s[i]<='z')    s[i] = toupper(s[i]);
        if(s[i] == ' ' || s[i] == '\n'){    //当一个单词结束
            
            for(k = i-j; k < i; k++){   //将当前单词输入c[]
                c[k-(i-j)] = s[k];
            }
            
            //printf("%s\n",c);
            
            for(k = 0; k <= j; k++){    //字符串比对
                if(c[k] == a[k]){
                    is *= 1;
                }
                else    is = 0;
            }
            
            if(is == 1){
                count++;
                if(count == 1)  place = i-j;
            }
            
            
            j = 0;  is = 1;  //计数器归位
            i++;    //重要：跳过空格
            memset(c, '\0', sizeof(c));    //临时数组清零
            }
        }
    
    if(count == 0)  printf("-1\n");
    else    printf("%d %d\n",count,place);
    return 0;
}
