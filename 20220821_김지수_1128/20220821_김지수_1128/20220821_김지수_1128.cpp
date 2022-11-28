#include<stdio.h>

int main() {

	int i, num, sum;
	float ave;

	sum = 0;
	i = 1;
	while (i < 11) {
		printf("%d 번째 데이터 입력?:", i);
		scanf_s("%d", &num);

		sum = sum + num;
		i++;
	}
	ave = (float)sum / (i - 1);

	printf("총점=%d\n", sum);
	printf("평균 = %5.2f\n", ave);

	return 0;
}