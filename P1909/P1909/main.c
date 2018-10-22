#include <stdio.h>

int main(){
    float m(float x, float y);
	int i,n = 0;
	float pr[3][3];
	
	scanf("%d",&n);
	
	for(i = 0; i < 3; i++){
		scanf("%f%f",&pr[i][0],&pr[i][1]);	//注意没有逗号 ，以及需要用对应形式 
		pr[i][2] = pr[i][1] / pr[i][0];
	}
	
    //test
	for(i = 0; i < 3; i++){
		printf("%f,%f,%f\n",pr[i][0],pr[i][1],pr[i][2]);
	}
	printf("\n");
	
	float t;    //mention: kind of !
    int j,k;
	
	
	//mao pao pai xu
	for(j = 0; j < 2; j++){
		for(i = 0; i < 2; i++){
			if(pr[i][2] > pr[i+1][2]){
				for(k = 0; k < 3; k++){
					t = pr[i+1][k];
					pr[i+1][k] = pr[i][k];
					pr[i][k] = t;
                }
			}
		}
	}
    
    int sum = 0;
    while(n > (int)m(m(pr[0][0],pr[1][0]),pr[2][0])){
        for(i = 0; i < 3; i++){
            sum += (n / (int)pr[i][0]) * pr[i][1];
            n -= (int)(n / (int)pr[i][0]) * pr[i][0];
        }
    }
    
    
    if(sum == 0){
        printf("%d\n",(int)m(m(pr[0][1],pr[1][1]),pr[2][1]));
    }
    else{
        printf("%d\n",(int) sum + (int)m(m(pr[0][1],pr[1][1]),pr[2][1]));
    }
}

float m(float x, float y){
    if(x>y){
        return y;
    }
    else{
        return x;
    }
}
