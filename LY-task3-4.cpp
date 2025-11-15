#include <stdio.h>

int sale(char type, int sale_weight, int w, int o, int t, int m) {
	int get = 0;
	switch (type) {
	case 'W':
		get += w * sale_weight;
		break;
	case 'O':
		get += o * sale_weight;
		break;
	case 'T':
		get += t * sale_weight;
		break;
	case 'C':
		get += m * sale_weight;
		break;
	}
	return get;
}//定义出售函数

int main() {
	int w = 5, o = 10, t = 7, c = 8; //定义四种蔬菜的基础价格
	printf("基础价格：\n小麦（1 公斤）5 个金币。\n洋葱（1 公斤）10 个金币。\n西红柿（1 公斤）7 个金币。\n胡萝卜（1 公斤）8 个金币。\n");
	char m_choice;
	char choice;
	char s_choice;
	int all_get = 0;
	while (all_get<1000) {
		printf("选择菜单（修改价格 [M]，出售 [S]）：");
		scanf_s(" %c", &choice,1);
		if (choice == 'M') {
			printf("输入收入类型（小麦 [W]、洋葱 [O]、西红柿 [T] 或胡萝卜 [C]）：");
			scanf_s(" %c", &m_choice,1);
			int new_price;
			printf("输入新的价格：");
			scanf_s("%d", &new_price);
			switch (m_choice) {
			case 'W':

				w = new_price;
				printf("将小麦价格更改为%d金币\n",w);
				break;
			case 'O':
				o = new_price; 
				printf("将洋葱价格更改为%d金币\n",o);
				break;
			case 'T':
				t = new_price;
				printf("将西红柿价格更改为%d金币\n",t);
				break;
			case 'C':
				c = new_price;
				printf("将胡萝卜价格更改为%d金币\n",c);
				break;
			}
			
		}
		else if (choice == 'S') {
			printf("选择出售的蔬菜（小麦 [W]，洋葱 [O]，西红柿 [T]，胡萝卜 [C]）：");
			scanf_s(" %c", &s_choice,1);
			if (s_choice != 'W' && s_choice != 'O' && s_choice != 'T' && s_choice != 'C') {
				printf("无效的蔬菜选择，请重新输入。\n");
				continue;
			}else {
				int sale_weight;
				printf("输入出售的重量（公斤）：");
				scanf_s("%d", &sale_weight);
				int one_get = sale(s_choice, sale_weight, w, o, t, c);
				all_get += one_get;
				printf("本次出售获得：%d 个金币。\n", one_get);
			}
		}
		else {
			printf("无效的选择，请重新输入。\n");
		}
	}
	printf("您已获得%d金币，可以休息一下了。", all_get);
}