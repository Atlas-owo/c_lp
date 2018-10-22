//
//  main.c
//  第五章习题
//
//  Created by Atlas.owo on 18/9/28.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int zhanzhuan(int x, int y);
int gengxiang(int x, int y);

int main(int argc, const char * argv[]) {
    /*
     for(int i=1;i<1000;i++){
        int a = i/100;
        int b = (i-100*a)/10;
        int c = i-100*a-10*b;
        
        if(threetimes(a)+threetimes(b)+threetimes(c)==i){
            printf("%d\n",i);
        }
    }
     */
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",zhanzhuan(a,b));
    
    return 0;
}


int threetimes(int x){
    return x*x*x;
}


int zhanzhuan(int x, int y){
    
    for(;x!=0;){
        if(x<y){
            x = x+y;
            y = x-y;
            x = x-y;
        }
        x = x%y;
    }
    
    return y;
}

int gengxiang(int x, int y){
    for(;x%2 && y%2 == 0;){
        x = x/2;
        y = y/2;
    }
    
}
