#include<iostream>
#include<math.h>

#define max_num  100 //�ܵ����ִ�С

int primenumber[max_num]; //�������
int num; //��������

int check_primenumber(int i) //�ж���������
{
	int square = (int)sqrt(i) + 1; //squareΪ��С��ƽ��������i����
	int flag = 1; //flagΪi�������ı�־
	for (int j = 0; j < num; j++)
	{
		if (primenumber[j] <= square&&i%primenumber[j] == 0) //�ж�С��square�������ܷ����i
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