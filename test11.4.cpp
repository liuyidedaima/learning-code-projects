#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

//int main()//二分法
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 ,11};
//	int re = sizeof(arr);
//	int left = 0;
//	int right = re - 1;
//	int k = 9;
//
//	while (left <= right)
//
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("xiabiaoshi:%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("zhaobudao");
//	}
//
//	return 0;
//}




//int main()
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




//int main()//打印乘法口决表
//{
//	int b = 0;
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


//int main()//for循环的基础
//{
//	int a = 0;
//	for (a = 1; a < 30; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}


//int main()//输入三次密码
//{
//	int a = 1;
//	int i = 4;
//	int password = 0;
//	for (a = 1; a < i; a++)
//	{
//		printf("\nplease put password:");
//		scanf("%d", &password);
//		if (password!=123456)
//		{
//			printf("\nfail");
//			continue;
//		}
//		printf("success");
//	}
//
//	return 0;
//}
//


//int main()//打印闪标
//{
//	char arr1[] = "yyjhaoshuai!!!!!";
//	char arr2[] = "###############";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s", arr2);
//		Sleep(500);
//		system("cls");
//
//		left++;
//		right--;
//	}
//
//	printf("yyjhaoshuai!!!!!");
//	return 0;
//}