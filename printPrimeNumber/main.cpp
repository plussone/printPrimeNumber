#include<iostream>
#include<math.h>

#define max_num  100 //总的数字大小

int primenumber[max_num]; //存放质数
int num; //质数数量

int check_primenumber(int i) //判断质数函数
{
	int square = (int)sqrt(i) + 1; //square为最小的平方数大于i的数
	int flag = 1; //flag为i是质数的标志
	for (int j = 0; j < num; j++)
	{
		if (primenumber[j] <= square&&i%primenumber[j] == 0) //判断小于square的质数能否除断i
		{
			flag = 0;
		}
	}
	return flag;
}

int main()
{
	primenumber[0] = 2;
	num = 1;
	printf("%d", primenumber[0]);
	for (int i = 3; i <= max_num; i++)
	{
		if (check_primenumber(i))
		{
			primenumber[num] = i;
			num++;
			printf(" %d", i);
		}
	}
	printf("\n");
	system("pause");
}