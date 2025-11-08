#include <stdio.h>
int main() {
	int year, century;
	while (1) {
		printf("请输入（非公元前）年份\nYEAR=");
		scanf("%d", &year);
		//while (getchar()!='\n');
		if (year <= 0) {
			printf("年份不能为0或负数！\n");
		}
		else if (year / 100.0 - year / 100 == 0) {
			century = year / 100;
			printf("CENTURY=%d\n", century);
		}else{
			century = year / 100+1;
			printf("CENTURY=%d\n", century);
		}
	}
}//问题：输入小数会进入循环,不执行scanf_s语句
//写入"while (getchar()!='\n');"语句输入小数时输出"年份不能为0或负数！"
