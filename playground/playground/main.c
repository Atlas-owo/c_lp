//
//  main.c
//  playground
//
//  Created by Atlas.owo on 18/11/6.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int num(char *s);

int main(){
    char s[50] = {"23342"};
    printf("%d\n",num(s));
}

int num(char *s){
    int i,sum = 0;
    for(i = 0; i < strlen(s); i++){
        sum *= 10;
        sum += s[i] - 48;
    }
    return sum;
}
