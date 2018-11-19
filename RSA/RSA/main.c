//
//  main.c
//  RSA
//
//  Created by Atlas.owo on 18/11/13.
//  Copyright © 2018年 Atlas_Lain. All rights reserved.
//

#include <stdio.h>
#include <math.h>
int rsa_d(int p, int q, int e);
int gcd(int x, int y);
int main(int argc, const char * argv[]) {
    long long int p,q,e;
    p = 9648423029010515676590551740010426534945737639235739800643989352039852507298491399561035009163427050370107570733633350911691280297777160200625281665378483;
    q =  11874843837980297032092405848653656852760910154543380907650040190704283358909208578251063047732443992230647903887510065547947313543299303261986053486569407;
    e =  65537;
    
    printf("%d\n",gcd(13,15));
    return 0;
}

int rsa_d(int p, int q, int e){
    int l = (p-1)*(q-1)/gcd(p-1, q-1);
    int d;
    for(d = 0; d < l; d++){
        if((e*d) % l == 1)   break;
    }
    return d;
}

int rsa(int x,int d,int n){
    return (int)pow(x, d) % n;
}

int gcd(int x, int y){
    int z;
    if(y > x){
        z = x;
        x = y;
        y = z;
    }
    z = x % y;
    if(z == 0)  return y;
    else    return gcd(y,z);
}
