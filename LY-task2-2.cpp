#include <stdio.h>
int main() {
	int a, b, c;
	char op;
	printf("一个披萨20个金币\n 每份配料2个金币\n 外送费5个金币\n");
	printf("输入N以创建新的订单，输入Q以退出系统");
	scanf_s("%c", &op,1);
	while (op != 'Q') {
		if (op == 'N') {
			printf("请输入披萨数量、披萨的配料数量以及是否需要（1-是/0-否），以空格分隔：");
			scanf_s("%d %d %d", &a, &b, &c);
			printf("订单已创建，订单详情：披萨数量：%d 披萨的配料数量：%d 配送服务：%d\n", a, b, c);
			int total = a * 20 + b * 2 + c * 5;
			printf("订单价格为：%d 个金币\n", total);
		}
		else {
			printf("无效的操作，请重新输入。\n");
		}
		printf("输入N以创建新的订单，输入Q以退出系统\n");
		scanf_s("%c", &op, 1); 
	}
}