#include <stdio.h>
#include <string.h>
int main() {
	char input1[100];
	char input2;
	int sum = 0;
	//scanf_s("%s", input1, (unsigned int)(sizeof(input1) / sizeof(input1[0])));???
	printf("输入一个数字：\n");
	scanf_s("%s", input1,100);
	printf("输入一个数字（0-9）：\n");
	scanf_s(" %c", &input2, 1);//空格用于跳过上一个输入后的回车符
	int len = strlen(input1);
	for (int i = 0; i < len; i++) {
		if (input1[i] == input2) {
			sum++;
		}
	}
	printf("%c 在自然数中出现了 %d 次", input2 ,sum);
	return 0;
}