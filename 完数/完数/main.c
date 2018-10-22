//
//  main.c
//  完数
//
//  Created by Atlas.owo on 18/10/18.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//
#include <math.h>

#include <stdio.h>

int w(int x);
void y(int x);
int main(int argc, const char * argv[]) {
    
    int j;
    for(j = 1; j <= 1000; j++){
        if(j == w(j)){
            y(j);
        }
        
    }
    
    return 0;
}

int w(int x){
    int i,count = 0;
    
    for(i = 1; i < x; i++){
        if(x % i == 0)  count += i;
    }
    return count;
}

void y(int x){
    int i;
    printf("%d its factors are ",x);
    for(i = 1; i < x; i++){
        if(x % i == 0)  printf("%d ",i);
    }
    printf("\n");

}
