#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>//计算阶乘
//
//int fal(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//	return n * fal(n - 1);
//}
//int main()
//{
//	int i = 0;
//	int ret = 0;
//	printf("请输入你想计算的阶乘:");
//	scanf("%d", &i);
//	ret = fal(i);
//	printf("结果是:%d",ret);
//	return 0;
//}


//#include<stdio.h>//猴子摘桃问题
//
//int total_peach(int n)
//{
//	return (n + 1) * 2;
//}
//
//int main()
//{
//	int peach = 0;
//	int rest = 1;
//	int day = 9;
//	for (day = 1; day < 10; day++)
//	{
//		peach = total_peach(rest);
//			rest = peach;
//	}
//	printf("第一天摘了%d个桃子", rest);
//	return 0;
//}


//#include<stdio.h>水仙花问题
//
//int nube(int n)
//{
//	return n * n * n;
//}
//int main()
//{
//	int i = 0;
//	int a, b, c;
//	for (i = 100; i <= 999; i++)
//	{
//		a = i / 100;
//		b =( i / 10) % 10;
//		c = i % 10;
//		if (i == nube(a) + nube(b) + nube(c))
//		{
//			printf("水仙数是%d\n", i);
//		}
//		else
//		{
//			continue;
//		}
//
//	}
//	return 0;
//}
