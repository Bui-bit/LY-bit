#include <stdio.h>
#include<time.h>
int main() {
	char a;
	clock_t start, end;
	double time_spend;
	while (1) {//循环，直到break退出
		printf("按回车键开始计时，或输入任意一个字符退出。");
		a = getchar();//开始点
		if (a != '\n') {
			break;//判断输入字符，退出程序
		}
		start = clock();//开始计时
		printf("计时开始，按回车键停止计时。\n");
		while (getchar() != '\n');//等待回车键
		//getchar();//终止点
		end = clock();
		time_spend = (double)(end - start) / CLOCKS_PER_SEC / 60;
		printf("结果： %.3f 分钟。\n", time_spend);
	}
}
