//
//  main.c
//  P1149
//
//  Created by Atlas.owo on 18/10/19.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int a[200] = {0};
    int i = 0,j = 0,count = 0,sum;
    int s[10] = {6,2,5,5,4,5,6,3,7,6};
    
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            sum = i + j;
            if(sum > 9){
                if(s[i] + s[j] + s[sum/10] + s[sum%10] > 20)    continue;
                a[count] = s[i] + s[j] + s[sum/10] + s[sum%10] + 4;
                count++;
            }
            else{
                if(s[i] + s[j] + + s[sum] > 20)    continue;
                a[count] = s[i] + s[j]  + s[sum] + 4;
                count++;

            }
                
        }
    }
    
    for(i = 0; i < count; i++){
        for(j = 0; j < 9; j++){
            if(a[i]+ 2*s[j] <= 24)  a[count+i] = a[i]+ 2*s[j];
        }
    }
    
    int n;
    scanf("%d",&n);
    for(i = 0, j = 0; i < 200; i++){
        if(a[i] == n)   j++;
    }
    
    printf("%d\n",j);
    
    return 0;
}

