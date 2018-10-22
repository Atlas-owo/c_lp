//
//  main.c
//  P1028_r
//
//  Created by Atlas.owo on 18/10/18.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int f(int x);

long int a[1005];

int main() {
    int i,j;
    a[0] = 1;
    a[1] = 1;
    
    for(i = 2; i < 1000; i++){
        if(i % 2 == 1){
            a[i] = a[i-1];
        }
        else{
            for(j = i/2; j > 0; j--){
                a[i] += a[j];
            }
            a[i]++;
        }
        //printf("%ld\n",a[i]);
        
    }
    
    int n;
    scanf("%d",&n);
    printf("%ld\n",a[n]);
    
    return 0;
}

