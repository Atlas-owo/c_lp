//
//  main.c
//  P1598
//
//  Created by Atlas.owo on 18/10/25.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>


int main(int argc, const char * argv[]) {
    char a[405] = {0};

    int i = 0, j = 0;
    do{
        a[i] = getchar();
        i++;
        if(a[i] == '\n') j++;
    }while(j<=4);
    
    printf("%s\n",a);
    
    return 0;
}
