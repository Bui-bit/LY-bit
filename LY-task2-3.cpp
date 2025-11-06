#include <stdio.h>

int sale (char type, int sale_weight){
	int get=0;
	switch (type) {
	case 'W':
		get += 5 * sale_weight ;
		break;
	case 'O':
		get += 10 * sale_weight;
		break;
	case 'T':
		get += 7 * sale_weight;
		break;
	case 'C':
		get += 8 * sale_weight;
		break;
	}
	return get;
}//定义出售函数

int main(){
	printf("价格：\n小麦5金币/公斤\n洋葱10金币/公斤\n西红柿7金币/公斤\n胡萝卜8金币/公斤\n");
	char type1;//存储出售类型
	int sale_weight1;//存储出售公斤数
	int day_get = 0;//存储当天总收入
	int initial_get = 183000;//初始收入
	while (day_get < 1000) {
		printf("请输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：");
		scanf_s(" %c", &type1, 1);
		
		printf("请输入您出售的公斤数：");
		scanf_s("%d", &sale_weight1);
		
		day_get = sale(type1, sale_weight1);
		
		printf("您今天的总收入是：%d金币\n", day_get);
	}
	printf("恭喜您已获得%d金币，可以休息一下了！\n",initial_get+day_get);
}
//存在问题：未对type1、sale_weight1的输入进行有效性检查