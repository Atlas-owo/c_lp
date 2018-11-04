//
//  main.c
//  凯撒
//
//  Created by Atlas.owo on 18/11/2.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

void caeser_re(char s[100]);

int main(int argc, const char * argv[]) {
    char c[100] = {0};
    int n = 0;
    scanf("%s",c);
    scanf("%d",&n);
    caeser_re(c);
    printf("%s\n",c);
    return 0;
}

void caeser_re(char s[100]){   // 变异凯撒
    int i = 0;
    for(; i < 100; i++){
        if(s[i] == 0)   continue;
        s[i] = s[i] + 5 + i;
    }
}
