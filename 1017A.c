#include<stdio.h>

int main(){
	int n;
	int sum = 0;
	int ans = 0;
	int temp_score = 0, temp_sum = -1;
	scanf("%d", &n);
	while(n--){
		for(int i = 0; i < 4; i++){
			scanf("%d", &temp_score);
			sum += temp_score;
		}
		// to first as temp_sum
		if(temp_sum == -1 && sum > temp_sum){
			temp_sum = sum;
			ans+=1;
		}else if(sum > temp_sum){
			ans+=1;
		}
		sum = 0;
	}
	printf("%d", ans);
	return 0;
}
