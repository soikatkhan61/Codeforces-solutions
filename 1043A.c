#include<stdio.h>

int n;
int temp[105];

int main() {
	scanf("%d", &n);
	int sum = 0;
	int mymax = 0;
	for (int i = 1;i <= n;++i) {
		scanf("%d", &temp[i]);
		sum += (temp[i]);
		if (temp[i] > mymax) {
			mymax = temp[i];
		}
	}
	int k;
	for (k = mymax;;++k) {
		int gain = 0;
		for (int i = 1;i <= n;++i) {
			gain += (k - temp[i]);
		}
		if (gain > sum) {
			printf("%d\n", k);
			break;
		}
	}
	//system("pause");
	return 0;
}
