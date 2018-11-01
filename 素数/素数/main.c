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
    int printf_sushu(int x,int y,int count);
    int a,b,n = 0;
    
    scanf("%d%d",&a,&b);
    n = printf_sushu(a,b,n);
    printf("\n%d\n",n);
    return 0;
    
}

int printf_sushu(int x,int y,int count)     //输出x到y之间所有的素数
{
    int sushu(int z);
    while (x<=y)
    {
        if(sushu(x)==1)
        {
            printf("%8.0d",x);
            count++;
        }
        x=x+1;
    }
    return count;
}

int sushu(int z)    //判定
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
