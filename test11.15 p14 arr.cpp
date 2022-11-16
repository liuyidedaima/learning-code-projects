#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr[] = "asd";
//	char arr1[] = { 'a','s','d'};
//	printf("%d\n", sizeof(arr));//4
//	printf("%d\n", sizeof(arr1));//3
//	printf("%d\n", strlen(arr));//3
//	printf("%d\n", strlen(arr1));//随机数
//
//	char arr2[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr2) / sizeof(arr2[1]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr2[i]);
//	}
//	return 0;
//}



//#include<stdio.h>
//
//int main()//二维数组打印
//{
//	int arr1[3][4] = { {1,2,3,4},{5,6,7,8} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j ++ )
//		{
//			printf("%d ", arr1[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//#include<stdio.h> //冒泡排序
//
//void bubble_arr(int arr[], int sz)
//{
//	int j = 0;
//	int n = 0;
//	for (j = 0; j < 8; j++)
//	{
//		int flag = 1;//避免不必要的运算，排成功后自动跳出
//		for (n = 0; n < sz - j-1; n++)
//		{
//			if (arr[n] > arr[n + 1])
//			{
//				int tem = arr[n];
//				arr[n] = arr[n + 1];
//				arr[n + 1] = tem;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_arr(arr, sz);
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int arr[] = { 1,2 };
//	printf("%p\n", arr);//arr为首地址
//	printf("%p\n", arr+1);
//
//	printf("%d\n", *arr);
//	printf("%d\n", *arr+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);                 //arr为整个数组
//	                                       //其余情况arr全为首地址
//	int sz = sizeof(arr) / sizeof(arr[0]);//arr为整个数组
//
//
//	return 0;
//}
