#include <stdio.h>
struct Snake {
	int size;
}snake1;

int main() {
	printf("蛇的初始长度为 3 米\n如果蛇吃了比它大的食物，它会死。\n否则，它会增加和食物一样大的长度（3 + x）。\n");
	snake1 = { 3 };
	int food;
	bool flag = 1;
	
	while (flag == 1) {
		printf("输入食物大小：");
		scanf_s("%d", &food);
		if (food > snake1.size) {
			printf("蛇在吃比它大的食物时死了。总长度为 %d 米\n",snake1.size);
			flage = 0;
		}
		else {
			snake1.size += food;
			printf("蛇吃掉了食物，现在长度为 %d 米。\n", snake1.size);
		}
	}
	return 0;
}
