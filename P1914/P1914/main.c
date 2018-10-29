//
//  main.c
//  P1914
//
//  Created by Atlas.owo on 18/10/26.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i;
    scanf("%d",&n);
    char c[55] = {0};
    scanf("%s",c);
    
    for(i = 0; i < 55; i++){
        if(c[i] <= 'z' && c[i] >= 'a'){
            c[i] = ((c[i]-'a'+n) % 26) + 'a';
        }
    }
    
    printf("%s\n",c);
    return 0;
}
