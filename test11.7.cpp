#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= 5; j++)
//		{
//			printf("%-3d ", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h>
//#include<math.h>
//float f(float x)
//{
//	return x * x - 5 *x + 4;
//}
//int main()
//{
//	float a,y1, y2, y3;
//	printf("请输入a值：");
//	scanf("%f", &a);
//	y1 = f(a);
//	y2 = f(a + 15);
//	y3 = (sin(a));
//	printf("%.3f %.3f %.3f", y1, y2, y3);
//	return 0;
//
//}



//#include <stdio.h>
//
//void show(char c, int n)
//{
//	int i;
//	for (i = 0; i < n; i++)
//		printf("%c", c);
//	printf("\n");
//}
//int main()
//{
//	int n;
//	char c;
//	printf("请输入一个字符\n");
//	scanf("%c", &c);
//	printf("请输入你想打印它的次数\n");
//	scanf("%d", &n);
//	show(c, n);
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 5;
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 1; j <= 20 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
		{
			if (j < 2 * i - 1)
			{
				printf("*  ");
			}
			else
			{
				printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}