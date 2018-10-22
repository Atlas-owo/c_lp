//
//  main.c
//  全组合
//
//  Created by Atlas.owo on 18/10/19.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
int *comb(int m,int n,int x);
void p(int a);
int main(int argc, const char * argv[]) {
    // insert code here...
    comb(4,5,1);
    //printf("\n");
    return 0;
}

int *comb(int m,int n, int x){
    int i;
    for(i = 1; i < x+n-m; i++){
        p(i);
        comb(m-1, n-1, x+1);
    }
    if(m == 1){
        p(x+n);
        comb(m,n,x+1);
    }
    
    if(m == 0){
        printf("\n");
    }

}

void p(int a){
    printf("%d,",a);
}
