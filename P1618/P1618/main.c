#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,c,i,j,k,is,count = 0;
    scanf("%d %d %d",&a,&b,&c);
    int s[9] = {0};
    for(i = 123; i/a*c < 1000; i++){
        if(i%a != 0)    continue;
        j = i*b/a;
        k = i*c/a;
        s[0] = i/100;
        s[1] = i/10%10;
        s[2] = i%10;
        s[3] = j/100;
        s[4] = j/10%10;
        s[5] = j%10;
        s[6] = k/100;
        s[7] = k/10%10;
        s[8] = k%10;
        
        is = 1;  //标志
        for(k = 0; k < 9; k++){
            if(is == 0) break;
            
            for(j = 0; j < 9; j++){
                if(k == j)  continue;
                if(s[j] == 0){
                    is = 0;
                    break;
                }
                if(s[k] == s[j]){
                    is = 0;
                    break;
                }
            }
        }
        if(is == 1){
            printf("%d %d %d\n",i,i*b/a,i*c/a);
            count++;
        }
    }
    if(count == 0)  printf("No!!!\n");
    return 0;
}
