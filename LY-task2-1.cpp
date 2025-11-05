#include <stdio.h>
int main() {
	int day_get = 0;//当天收入
	int one_get = 0;//本次收入
	int all_get = 2800;//初始金币2800
	while (day_get < 200) {
		printf("输入本次收入:");
		scanf_s("%d", &one_get);
		day_get += one_get;
	} all_get += day_get;
	printf("恭喜！您已获得%d个金币，现在可以休息了。\n", all_get);
}