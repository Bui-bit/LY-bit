#include <stdio.h>
#include<stdlib.h>
struct student {
	char name[20];
	char number[20];
	char gender[3];
	char height[10];
}stu1;

void display(struct student* stu) {
	printf("1.姓名：%s\n", stu->name);
	printf("2.学号：%s\n", stu->number);
	printf("3.性别：%s\n", stu->gender);
	printf("4.身高：%s\n", stu->height);
	printf("5.退出登录\n");
}

int main() {
	struct student* stu0 = (struct student*)malloc(sizeof(struct student));
	stu1 = { "lgl","258072332","男","1.84" };
	stu0 = &stu1;
	int mun = 5;

	char password1[] = "111606";
	char name1[] = "lgl";
	char password2[40];
	char name2[40];
	
	while (mun > 0) {
		printf("请输入用户名：");
		scanf_s("%s", name2, 40);
		printf("请输入密码:");
		scanf_s("%s", password2, 40);
		bool flag2 = 1;
		bool flag1 = 1;
		bool flag = 0;
		mun--;
		for (int i = 0;; i++) {
			if (name1[i] == '\0') { break; }
			else if (name1[i] != name2[i]) {
				flag2 = 0;
			}
		}
		for (int i = 0;; i++) {
			if (password1[i] == '\0') { break; }
			else if (password2[i] != password1[i]) {
				flag2 = 0;
			}
		}
		
		if (flag2 && flag1) {
			printf("登录成功！ \n");
			 flag = 1;
		}else {
			printf("用户名或密码错误！你还有%d次机会！ \n", mun);
			if (mun == 0) {
				printf("“哼，渣男，骗子”\n登录失败，程序已退出！ \n");
				return 0;
			}
		}
		if (flag == 1) {
			int choice = 1;
			while (choice != 5) {
				display(&stu1);
				printf("请输入你的选择：");
				scanf_s("%d", &choice);
				switch (choice) {
				case 1:
					printf("输入新的姓名：");
					scanf_s("%s", stu0->name, 20);
					struct student;
					break;
				case 2:
					printf("输入新的学号：");
					scanf_s("%s", stu0->number, 20);
					struct student;
					break;
				case 3:
					printf("输入新的性别：");
					scanf_s("%s", stu0->gender, 3);
					struct student;
					break;
				case 4:
					printf("输入新的身高：");
					scanf_s("%s", stu0->height, 10);
					struct student;
					break;
				case 5:
					printf("已退出登录！ \n");
					return 0;
				default:
					printf("选择错误，请重新选择！ \n");
					break;
				}
			}
		}
	}
}//未加入输入验证