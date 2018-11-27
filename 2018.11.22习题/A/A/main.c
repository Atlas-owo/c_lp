//
//  main.c
//  A
//
//  Created by Atlas.owo on 18/11/22.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[20] = {0};
    int x[20] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char r[15] = {"10X98765432"};
    int a;
    scanf("%d",&a);
    
    for(; a>0 ; a--){
    scanf("%s",s);
    int sum ,i;
    for(sum = 0, i = 0; i < 17; i++){
        sum += x[i] * (s[i]-'0');
    }
    
    if(s[17] == r[sum%11]){
        printf("right\n");
    }
    else{
        printf("wrong\n");
    }
    }
    
    return 0;
}
