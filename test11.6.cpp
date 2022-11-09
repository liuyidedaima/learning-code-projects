#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//int main()//打印100到200的素数  试除法
//{
//	int i = 0;
//	int k = 0;
//	for (i = 100; i <= 200;i++)
//	{
//		for (k = 2; k < i; k++)
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//		}
//		if (i ==k )
//		{
//			printf("素数是%d\n", i);
//		}
//	}
//	return 0;
//}


//int main()//打印100到200的素数  试除法  优化
//{
//	int i = 0;
//	int k = 0;
//	int court = 0;
//	for (i = 101; i <= 200;i+=2)//偶数不是素数
//	{
//		for (k = 2; k <= sqrt(i); k++)//数的因子<=本身平方根
//		{
//			if (i % k == 0)
//			{
//				break;
//			}
//		}
//		if (k >sqrt(i) )
//		{
//			printf("素数是%d\n", i);
//			court++;
//		}
//	}
//	printf("%d", court);
//	return 0;
//}



//int main()//找数字9的个数
//{
//	int i = 0;
//	int court = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//9,19,29......99
//		{
//			court++;
//		}
//		if (i / 10 == 9)//90,91,92.....99
//		{
//			court++;
//		}
//
//	}
//	printf("%d", court);
//	return 0;
//}


int main()//计算分数和1/1-1/2+1/3......-1/100
{
	int i = 0;
	float court = 0;
	float num;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		num = flag*1.0 / i;
		flag = -flag;
		court += num;
	}
	printf("%lf", court);
	return 0;
}

