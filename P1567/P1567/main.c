//
//  main.c
//  P1567
//
//  Created by Atlas.owo on 18/10/15.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int n,i,count = 1,ans = 0;
    scanf("%d",&n);
    
    int t[n];
    
    for(i = 0; i < n; i++){
        scanf("%d",&t[i]);
    }
    
    for(i = 1; i < n; i++){
        if(t[i-1]<t[i]){
            count++;
        }
        else{
            if(ans < count){
                ans  = count;
            }
            count = 1;
        }
    }
    printf("%d\n",ans);
    return 0;
}

//可以不用数组
