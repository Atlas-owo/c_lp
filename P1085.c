#include <stdio.h>


int main()
{
	// int gaoxing(int x, int d[7][3]);
	int d[7][3];
	int i;
	
	for (i = 0; i < 7; i++) {
		scanf("%d%d", &d[i][0], &d[i][1]);
	}
	
	for(i = 0; i < 7; i++) {
		if(d[i][0] + d[i][1] > 8){
			d[i][2] = d[i][0] + d[i][1] - 8;
		}
		else{
			d[i][2] = 0;
		}
	}
	
	
	int place = 0;
	int max = 1;
	for(i = 6; i >= 0; i--){
		if(d[i][2] == 0){
			continue;
		}
		else if(d[i][2] >= max){
			place = i + 1;
			max = d[i][2];
		}
	}

	printf("%d\n", place);

    return 0;
}

/*
好好看题 
int gaoxing(int x, int d[7][3]) {
	int sum;
	if (x == 0) {
		sum = 0;
		return 0;
	}
	
	if (d[x][0] + d[x][1] > 8) {
		sum += 1;
	}
	
	return sum + gaoxing(x - 1,d);
}
*/
