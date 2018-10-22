//
//  main.c
//  素数
//
//  Created by Atlas.owo on 18/9/26.
//  Copyright © 2018年 Atlas_w. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int main()
{
    void printf_sushu(int x,int y);
    int a,b;
    scanf("%d%d",&a,&b);
    printf_sushu(a,b);
    return 0;
}

void printf_sushu(int x,int y)
{
    int sushu(int z);
    while (x<=y)
    {
        if(sushu(x)==1)
        {
            printf("%8.0d",x);
        }
        x=x+1;
    }
}

int sushu(int z)
{
    
    
    if (z%2==0 && z!=2){
        return 0;
    }
    else if (z==1){
        return 0;
    }
    
    else{
        double n=sqrt(z);

        for(int i=3;i<=n;i++)
        {
            if (z%i==0)
            {
                return 0;
            }
        }
        return 1;
    }
}
