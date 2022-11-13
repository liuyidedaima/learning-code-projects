#define _CRT_SECURE_NO_WARNINGS
// 函数上

//#include<stdio.h>
//int ADD(int a, int b)//定义函数
//{
//	int c;
//	c = a + b;
//	return c;
//}
//int main()
//{
//	int num1 = 198;
//	int num2 = 84;
//	int add = ADD(num1, num2);
//	printf("%d\n",add);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()//复制库函数
//{
//	char arr2[] = "################";
//	char arr1[] = "hello world";
//        目的地 源头
//	strcpy(arr2, arr1);
//	printf("%s", arr2);
//	return 0;
//}


//#include<stdio.h>
//#include<string.h>
//
//int main()//交换函数
//{
//	char arr[] = "hello world";
//	         对象 换成物 前几位
//		memset(arr, '$', 5);
//		printf("%s", arr);
//return 0;
//}


//#include<stdio.h>
//
//void swap( int *x, int *y) //使用指针 定义函数交换值
//{
//	int num = 0;
//	num = *x;
//	*x = *y;
//	*y = num;
//
//}
//int main()
//{
//	int a = 10;
//	int s = 29;
//	swap(&a, &s);
//	printf("a=%d,s=%d",a, s);
//	return 0;
//}


//#include<stdio.h>         //试除法
//
//int is_prime(int x)//使用函数求素数
//{
//	int a = 0;
//	for (a = 2; a < x; a++)
//	{
//		if (x % a == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//
//int main()
//{
//	int i = 0;
//	int court = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (1 == is_prime(i))
//		{
//			printf("%d ", i);
//			court++;
//		}
//	}
//	printf("\ncourt=%d", court);
//	return 0;
//}



//#include<stdio.h>
//
//int is_leap_year(int x)//使用函数判断闰年
//{
//	if ((0 == x % 4 && x % 100 != 0) || (0 == x % 400))//四年一闰，百年不闰，四百年再闰
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	int court = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//			court++;
//		}
//	}
//	printf("\ncourt=%d", court);
//	return 0;
//}


//#include<stdio.h>
//           //传了第一个元素的地址
//int binary_search(int arr[], int u, int sz)   //二分法
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (u< arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if(u>arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	           // 你把他放在这
//	}
//	return -1;//折磨过你的地方
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//在函数体外求数组元素
//	int i = 0;
//	printf("请输入你想找的数");
//	scanf("%d", &i);
//	int a = binary_search(arr1, i, sz);
//
//	if (a==-1)//避免复杂表达式
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d",a);
//	}
//	return 0;
//}


