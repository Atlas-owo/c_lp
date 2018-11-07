//
//  main.c
//  P1464
//
//  Created by Atlas.owo on 18/11/5.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
int w(int a,int b,int c,int s[25][25][25]);
int main(int argc, const char * argv[]) {
    int s[25][25][25] = {0};    //避免出现正好返回值与初设值相同
    int a = 0,b = 0,c = 0;
    scanf("%d %d %d",&a,&b,&c);
    while(1){
        if(a==-1 && b==-1 && c==-1) break;  //为什么写上面不对？
        printf("w(%d, %d, %d) = %d\n",a,b,c,w(a, b, c, s));
        scanf("%d %d %d",&a,&b,&c);
    }
    
    return 0;
}

int w(int a,int b,int c,int s[25][25][25]){
    int r = 0;
    if(a <= 0 || b <= 0 || c <= 0){
        return 1;
    }
    
    if(a > 20 || b > 20 || c > 20){
        r = w(20,20,20,s);
        return r;
    }
    
    if(s[a][b][c] != 0) return s[a][b][c];
    
    if(a < b && b < c){
        r = w(a,b,c-1,s) + w(a,b-1,c-1,s) - w(a,b-1,c,s);
        s[a][b][c] = r;
        return r;
    }
    
    else{
        r = w(a-1, b, c,s) + w(a-1,b-1,c,s) + w(a-1, b, c-1,s) - w(a-1,b-1,c-1,s);
        s[a][b][c] = r;
        return r;
    }
    
}
