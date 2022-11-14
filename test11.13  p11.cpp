#define _CRT_SECURE_NO_WARNINGS

// //函数的递归
//#include<stdio.h>
//void print(int x)//递归打印
//{
//	if (x > 9)
//	{
//		print(x / 10);//依次求个位
//	}
//	printf("%d ", x % 10);
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print(i);
//	return 0;
//}


////用递归解释strlen
//#include<stdio.h>
//
//int my_strlen(char *arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);//分解首个字母
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "hello world";
//		int i = my_strlen(arr);
//		printf("%d", i);
//	return 0;
//}


////用递归求阶乘
//#include<stdio.h>
//
//int fal(int m)
//{
//	if (m < 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return m * fal(m - 1);
//	}
//}
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	scanf("%d", &i);
//	ret = fal(i);
//	printf("%d", ret);
//	return 0;
//}


////用递归求斐波那契数列
//#include<stdio.h>
//
//int fal(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return fal(n - 1) + fal(n - 2);
//	}
//}
//int main()
//{
//	int ret = 0;
//	int i = 0;
// printf("请输入想求第几个斐波那契数");
//	scanf("%d", &i);
//	ret = fal(i);
// printf("%d",ret);
//	return 0;
//}


//高效求斐波那契数
//#include<stdio.h>
//
//int fal(int n)
//{
//	int a = 1, b = 1, c = 1;
//	while(n >= 3)//用三个变量反复变换求斐波那契数
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;//决定执行交换次数
//	}
//	return c;
//}
//int main()
//{
//	int ret = 0;
//	int i = 0;
//	printf("请输入想求第几个斐波那契数");
//	scanf("%d", &i);
//	ret = fal(i);
//	printf("%d", ret);
//	return 0;
//}


