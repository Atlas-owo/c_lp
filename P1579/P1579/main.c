//
//  main.c
//  P1579
//
//  Created by Atlas.owo on 18/11/1.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int prime(int z);
int main(int argc, const char * argv[]) {
    
    int i,j,k,n,o = 0;
    scanf("%d",&n);
    
    for(i = 1; i < n-4; i++){
        if(prime(i) == 0)   continue;
        if(o == 1)  break;
        for(j = 0;j < n-4; j++){
            if(prime(j) == 0)   continue;
            k = n-i-j;
            if(prime(k) == 1){
                printf("%d %d %d\n",i,j,k);
                o = 1;
                break;
            }
        }
    }
    
    return 0;
}

int prime(int z)    //判定
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
