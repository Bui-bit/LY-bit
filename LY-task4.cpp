#include <stdio.h>
void menu(){
	printf("\n");
	printf("**************************\n");
	printf("菜单:\n");
	printf("1. 我要好好学习 \n2. 我要女朋友(男朋友)\n");
	printf("3. 我要变有钱 \n4. 我要变成技术大佬\n ");
	printf("5. 退出\n");
	printf("**************************\n");
}
int choose_1() {//选项1的函数
	printf("请输入一个正整数:");
	double n = 0;
	scanf_s("%lf", &n);
	if (n>0 and n==(int)n) {
		printf("\n");
		for (int i = 1; i <= 9; i++) {
			printf(" %d x %d=%d\n ", (int)n, i, i * (int)n);
			printf("背乘法表去吧！\n");
		}return 0;
	}
	else {
		printf("Care for mentally retarded children, we stay together\n");
		return 1;
	};
}
int choose_2() {//选项2的函数
	printf("吾日三省吾身，高否，帅否，富否，否，滚去学习\n");
	printf("现在开始学习\n");
	choose_1();
	return 0;
}
int choose_3() {//选项3的函数
	printf("有钱后想干什么？\n");
	printf("A．找女朋友(男朋友)     B.买同济版高等数学，好好学习\n");
	char option;
	scanf_s(" %c", &option, 1);
	if (option == 'A' || option == 'a') {
		choose_2();
	}
	else if (option == 'B' || option == 'b') {
		choose_1();
	}
	else {
		printf("输入错误\n");
	}return 0;
}
int choose_4() {//选项4的函数
	printf("你为什么学技术？\n");
	printf("A．为了变有钱       B.因为我热爱学习\n");
	int a = 0;
	char option;
	scanf_s(" %c", &option, 1);
	if (option == 'A' || option == 'a') {
		choose_2();
		return 0;
	}
	else if (option == 'B' || option == 'b') {
		a=choose_1();
		return a;
	}
	else {
		printf("输入错误\n");
		return 0;
	};
}


int main() {
	char option=0;
	const int password = 111606;//密码设置
	int input;                                  
	int num = 0;
	char name[20] = "LY-lgl";//姓名设置
	const int stu_num = 220204020560;//学号设置
	bool flag = 0;
	bool flag2 = 0;
	printf("please enter your password:");
	while (num < 3)//密码输入验证
	{
		scanf_s("%d", &input);
		if (input == password)
		{
			printf("\n");
			printf("**************************\n");
			printf("密码正确！欢迎登陆！\n");
			printf("您的账户信息如下\n姓名：%s\n学号：%d\n", name, stu_num);
			printf("**************************\n");
			flag = 1;
			break;
		}
		else
		{
			num++;
			if (num < 3)
			{
				printf("密码错误！请重新输入(剩余%d次机会):", 3 - num);
			}
			else
			{
				printf("连续三次密码错误！\n");
				printf("you are a bad boy\n");
				return 0;

			}
		}
	} 
	if (flag) {
		while (true) {
			menu();
			printf("请选择你的目标(输入数字1-5):");
			scanf_s(" %c", &option, 1);//菜单选项输入
			switch (option) {
			case '1':
				choose_1();
				break;
			case '2':
				choose_2();
				break;
			case '3':
				choose_3();
				break;
			case '4':
				flag2 = choose_4();
				if (flag2 == 1) {
					printf("You are such a sweet little fool.\n ");
				}
				break;
			case '5':
				printf("感谢使用本系统，祝你学业有成！\n");
				return 0;
			default:
				printf("输入错误，请重新选择。\n");
			}
		}
	}
	printf("再见！\n");
}