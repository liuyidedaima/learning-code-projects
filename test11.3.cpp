#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int re = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = re - 1;
	int k = 4;

	while (left <= right)

	{
		int mid = (right + left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else;
		{
			printf("xiabiaoshi:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("zhaobudao");
	}

	return 0;
}




//
////int main()
//{
//	int n = 0;
//	int a = 0;
//	int all = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 4; n++)
//	{
//		all = all * n;
//		sum = sum + all;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int all = 1;
//	int sum = 0;
//
//	for (n = 1; n<=4; n++)
//	{
//		all = 1;
//		for (a = 1; a <=n; a++);
//		{
//			all = all * a;
//		}
//		sum = sum + all;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int n = 0;
//	int all = 1;
//	printf("请输入你想计算的阶乘：");
//	scanf("%d", &n);
//	for (a = 1; a <=n;a++ )
//	{
//		all = all * a;
//	
//	}
//	printf("all=%d", all);
//	return 0;
//}


//int main()
//{
//	int b = 0;//打印乘法口决表
//	int a = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//			printf("%d*%d=%2d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//for循环的基础
//	for (a = 1; a < 30; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int re = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = re - 1;
	int k = 4;

	while (left <= right)

	{
		int mid = (right + left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else;
		{
			printf("xiabiaoshi:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("zhaobudao");
	}

	return 0;
}




//
////int main()
//{
//	int n = 0;
//	int a = 0;
//	int all = 1;
//	int sum = 0;
//
//	for (n = 1; n <= 4; n++)
//	{
//		all = all * n;
//		sum = sum + all;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int a = 0;
//	int all = 1;
//	int sum = 0;
//
//	for (n = 1; n<=4; n++)
//	{
//		all = 1;
//		for (a = 1; a <=n; a++);
//		{
//			all = all * a;
//		}
//		sum = sum + all;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}




//int main()
//{
//	int a = 0;
//	int n = 0;
//	int all = 1;
//	printf("请输入你想计算的阶乘：");
//	scanf("%d", &n);
//	for (a = 1; a <=n;a++ )
//	{
//		all = all * a;
//	
//	}
//	printf("all=%d", all);
//	return 0;
//}


//int main()
//{
//	int b = 0;//打印乘法口决表
//	int a = 0;
//	for (a = 1; a < 10; a++)
//	{
//		for (b = 1; b < 10; b++)
//		{
//			printf("%d*%d=%2d ", a, b, a * b);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int a = 0;//for循环的基础
//	for (a = 1; a < 30; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}