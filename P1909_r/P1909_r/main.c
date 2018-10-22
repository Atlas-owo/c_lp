#include <stdio.h>

int main(){
    int i, ans = 0 ,a,b,c,d,n;
    
    scanf("%d",&n);
    
    for(i = 0; i < 3; i++){
        scanf("%d%d",&a,&b);
        c = a;
        d = b;
        while(c<n){
            c *= 2;
            d *= 2;
        }
        while(c>n){
            c -= a;
            d -= b;
        }
        
        if(c!=n){
            c += a;
            d += b;
        }
        
        if(d < ans || ans ==0){
            ans = d;
        }
        
    }
    printf("%d\n",ans);
}
    
