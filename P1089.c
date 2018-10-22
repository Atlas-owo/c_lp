# include <stdio.h>

int main(){
	int i;
	int s[12];
	for(i = 0; i < 12; i++){
		scanf("%d",&s[i]);
	}
	
	int yu = 0,cun = 0,stu = 0; //连续定义写法太坑人了 
	
	for(i = 0; i < 12; i++){
		yu = yu + 300 - s[i];
		if(yu < 0){
			printf("-%d",i+1);
			stu = 1;
			break;
		}
		cun += (yu/100)*100;
		yu %= 100;
		//printf("%d,%d\n",cun,yu);
 	}
 	
 	if (stu == 0){
 		printf("%d\n",(cun/5)*6 + yu);
	 }
	
	return 0;
}
