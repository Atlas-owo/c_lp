//
//  main.c
//  P1036
//
//  Created by Atlas.owo on 18/10/18.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//
#include <math.h>
#include <stdio.h>

int su(int x);
int comb(int already_added, int to_be_selceted, int start, int end);
int a[20] = {0};
int n,k;

//一定要注意哪些是全局 哪些是局部


int main() {

    scanf("%d%d",&n,&k);
    
    int j;
    for(j = 0; j < n; j++){
        scanf("%d",&a[j]);
    }
    
    
    printf("%d\n",comb(0,k,0,n-1));
    return 0;
}

int su(int x){
    int i;
    for(i = 2; i < (int)sqrt(x) + 1; i++){
        if(x % i == 0){
            return 0;
        }
    }
    //count++;
    return 1;
}

int comb(int already_added, int to_be_selceted, int start, int end){    //返回值为有多少素数
    if(to_be_selceted == 0){
        return su(already_added);
    }
    int sum = 0;
    /*
    if(start == end){
        return su(already_added + a[start]);
    }
    */
    int u;
    for(u = start;  u <= end; u++){
        sum += comb(already_added + a[u], to_be_selceted-1, u+1, end);
    }
    return sum;
}
