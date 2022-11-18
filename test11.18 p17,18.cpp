#define _CRT_SECURE_NO_WARNINGS


//#include<stdio.h>
//
//int main()
//{
//	int a = 3;// 不创建第三变量交换a，b的值
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}


//#include<stdio.h>//找非空数组中单一元素
//
//int main()
//{
//	int arr[9]={1, 2, 3, 4, 5, 1, 2, 3, 4};
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		int court = 0;
//		for (j = 0; j < 9; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				court++;
//			}
//			
//		}
//		if (court == 1)
//		{
//			printf("单身狗是：%d", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}


//#include<stdio.h>//找非空数组中单一元素 优化版
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,1,2,3,4,5,6,7 };
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < 13; i++)
//	{
//		ret = ret ^ arr[i];
//	}
//	printf("单身狗是%d", ret);
//	return 0;
//}