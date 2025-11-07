#include <stdio.h>
#include<time.h>

int main() {
	double f;
	while (1) {
		printf("请输入华氏度：");
		scanf_s("%lf", &f);
		double c = 5 / 9.0 * (f - 32);
		printf("对应的摄氏度是：%.2lf\n", c);
	}
}