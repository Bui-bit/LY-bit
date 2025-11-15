#include <stdio.h>
int  jump(int i,int ta_ban[11]) {
	int jump_length=0;
	for (int j = i; j < 10; j++) {
		if (ta_ban[j+1] == 0) {
			jump_length++;
		}
		else {
			break; }
	}
	if (ta_ban[i] >= jump_length) {
		ta_ban[i] -= jump_length;
		i += jump_length + 1;
	}
	return i;
}
int main() {
	int passed = 0;
	//int a = 0;
	int ta_ban[11] = { 5,4,3,2,1,5,4,3,2,1,1 };
	//int ta_ban[11] = { 3,1,2,2,2,2,2,2,2,2,1 };
	for (int i = 0; i < 10; i++) {
		printf("%d号车脚踏板耐久度：%d\n", i + 1, ta_ban[i]);
	}
	//printf("请输入10个数字分别为10个踏板设置一个耐久度（1-5）：");
	//scanf_s("%d%d%d%d%d%d%d%d%d%d", &ta_ban[0], &ta_ban[1], &ta_ban[2], &ta_ban[3], &ta_ban[4], &ta_ban[5], &ta_ban[6], &ta_ban[7], &ta_ban[8], &ta_ban[9]);
	for (int t = 0; t < 5; t++) {
		for (int i = 0; i < 10; i++) {
			if (ta_ban[i] > 0) {
				if (ta_ban[i + 1] == 0) {
					i = jump(i, ta_ban);
				}
				else if (ta_ban[i + 1] >= 0) {
					ta_ban[i]--;
				}
			}
			else {
				//a+=1;
				//if (a == 1) { printf("第%d个踏板损坏，无法继续前进\n", i); }
			 break;
			}
			while (i == 9) {
				passed++;
				break;
			}
		}
	}
//找出踏板损坏处
	printf("\n%d人可以过桥", passed);
}