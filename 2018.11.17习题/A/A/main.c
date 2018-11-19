#include <stdio.h>
int ovhf(int x);
int main(int argc, char const *argv[])
{
    int i,j,k,l;
    scanf("%d",&k);
    
    int s[105] = {0};
    for(i = 0; i < k; i++){
        scanf("%d",&s[i]);
    }
    
    for(j = 0; j < k-1; j++){
        for(i = 0; i < k-1; i++){
            if(s[i]>s[i+1]){
                l = s[i];
                s[i] = s[i+1];
                s[i+1] = l;
            }
        }
    }
    
    for(l = 0, i = 0; i < ovhf(k); i++){
        l+=ovhf(s[i]);
    }
    
    printf("%d\n",l);
    return 0;
}

int ovhf(int x){
    if(x%2==1)  return x/2+1;
    else    return x/2;
}
