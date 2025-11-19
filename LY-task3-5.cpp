#include <stdio.h>


int main() {
	int puzzle[3][3];
	bool flag = 1;
	for (int i = 0; i < 3; i++) {
		printf("填入三个数字(以空格分隔)：");
		scanf_s("%d %d %d", &puzzle[i][0], &puzzle[i][1], &puzzle[i][2]);
	};
	for (int i = 0; i < 3; i++) {
		if(puzzle[i][0] == puzzle[i][1] || puzzle[i][2]== puzzle[i][0]|| puzzle[i][1]==puzzle[i][2]){
			flag = 0;
			break;
		}else if(puzzle[0][i] == puzzle[1][i] || puzzle[2][i]== puzzle[0][i]|| puzzle[1][i]==puzzle[2][i]){
			flag = 0;
			break;
		}
	}if (flag==1) {
		printf("正确！你可以走出这里。\n");
	return 0;
}else if (flag==0) {
		printf("错误！你无法走出这里。");
	return 0;
}
}