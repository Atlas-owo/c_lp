//
//  main.c
//  递归
//
//  Created by Atlas.owo on 18/10/16.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>


int sum(int x);
void hanoi(int n, char x, char y, char z);
void mov(char a,char b);

int main(int argc, const char * argv[]) {
    hanoi(3, 'a', 'b', 'c');
    
    return 0;
}



int sum(int x){
    if(x == 1){
        return 1;
    }
    return sum(x-1) + x;
}



void hanoi(int n,char x, char y, char z){
    if(n == 1){
        mov(x,z);
    }
    else{
        hanoi(n-1,x,z,y);
        mov(x,z);
        hanoi(n-1,y,x,z);
    }
    
}

void mov(char a,char b){
    printf("%c => %c\n",a,b);
}
