
#include <stdio.h>

int main() {
    char i[14];
    int j,k = 1, sum = 0;
    gets(i);
    
    for(j = 0; j < 12; j++){
        if(i[j] != '-'){
            sum += (i[j] - '0') * k;
            k++;
        }
    }
    
    
    sum %= 11;
    if(sum == 10){
        sum = 'X';
    }
    else{
        sum += '0';
    }
    
    
    if(sum == i[12]){
        printf("Right\n");
        return 0;
    }
    else{
        for(j = 0; j < 12; j++){
            printf("%c",i[j]);
        }
        printf("%c\n",sum);
        return 0;
    }
    
    
}
