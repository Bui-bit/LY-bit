#include <stdio.h>
#include<math.h>
int main(void)
{
	printf("请输入天数：");//获取输入天数
	double days = 0;
	scanf_s("%lf", &days);
	while (days >= 0 and days == int(days)) { //判断输入是否为非负整数
		int weeks = (int)days / 7;
		int rem_days = int(days) % 7;
		printf("%.0lf days is %d weeks,%d days.\n", days, weeks, rem_days);
		printf("请输入天数：");
		scanf_s(" %lf", &days);
	}
	printf("输入不为非负整数，程序结束");
	return 0;
	//Q：当输入为0.99999997—0.99999999时，输出为1 days is 0 weeks,1 days.是否符合要求？
}