#include <stdio.h>

// 结构体定义
struct student {
    char name[20];  // 姓名
    char gender[10]; // 性别
    int id;          // 学号
};

//结构体复制交换函数
void exchange1(struct student* x, struct student* y) {
    struct student temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    // 定义并初始化两个结构体变量
    struct student stu1 = { 0 };
    struct student stu2 = { 0 };
     
	//输入第一个学生的信息
	printf("请输入第一个学生的信息：\n");
	printf("姓名：");
    scanf_s("%s", stu1.name, 20);
	printf("性别：");
    scanf_s("%s", stu1.gender, 10);
	printf("学号：");
	scanf_s("%d", &stu1.id);
	//输入第二个学生的信息
    printf("请输入第二个学生的信息：\n");
    printf("姓名：");
    scanf_s("%s", stu2.name, 20);
    printf("性别：");
    scanf_s("%s", stu2.gender, 10); 
    printf("学号：");
    scanf_s("%d", &stu2.id);
    
    // 打印交换前的内容
    printf("\n交换前：\n");
    printf("学生1：姓名：%s，性别：%s，学号：%d \n", stu1.name, stu1.gender, stu1.id);
    printf("学生2：姓名：%s，性别：%s，学号：%d \n", stu2.name, stu2.gender, stu2.id);

    // 使用结构体复制法交换结构体
    exchange1(&stu1, &stu2);

    // 打印交换后的内容
    printf("\n交换后： \n");
    printf("学生1：姓名：%s，性别：%s，学号：%d \n", stu1.name, stu1.gender, stu1.id);
    printf("学生2：姓名：%s，性别：%s，学号：%d \n", stu2.name, stu2.gender, stu2.id);

return 0;
}