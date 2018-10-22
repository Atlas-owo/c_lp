//
//  main.c
//  P1422
//
//  Created by Atlas.owo on 18/10/3.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    scanf("%d",&i);
    double j = 0;
    
    if(i<=150){
        j = i*0.4463;
    }
    else if (i<=400){
        j = 150*0.4463 + (i-150)*0.4663;
    }
    else{
        j = 150*0.4463 + 250*0.4663 + (i-400)*0.5663;
    }
    
    printf("%.1f\n",j);
    return 0;
}
