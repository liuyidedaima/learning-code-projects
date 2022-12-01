#define _CRT_SECURE_NO_WARNINGS

//#include<stdio.h>//数组翻转
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int tem = 0;
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//    while(left<right)
//	{
//
//		tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//13
//00000000000000000000000001101
//13%2
//00000000000000000000000000001
//13/2
//00000000000000000000000000110
// ......
//#include<stdio.h> //%2留最后一个二进制位 /2消除最后一个二进制位
//
//int main()
//{
//	unsigned int i = 0;
//	printf("请输入你想查看的数二进制位有几个1：");
//	scanf("%d", &i);
//	int court = 0;
//	while (i)
//	{
//		if (i % 2 == 1)
//		{
//			court++;
//		}
//		i = i / 2;
//	}
//	printf("%d", court);
//	return 0;
//}


//00000000000000000000000000001101
//00000000000000000000000000000001 &
//00000000000000000000000000000001
// 
//#include<stdio.h>//向右 按位与依次计算1的个数
//
//int main()
//{
//    int i = 0;
//	printf("请输入你想查看的数二进制位有几个1：");
//	scanf("%d", &i);
//	int court = 0;
//	int j = 0;
//        for(j=0;j<32;j++)
//	{
//		if( ((i>>j) & 1 == 1))
//		{
//			court++;
//		}
//	}
//	printf("%d", court);
//	return 0;
//}


//13&13-1   
//1101
//1100
//n=n-1 1100
//再减1
//1100
//1011
//      1000
//......


//#include<stdio.h>//高效计算二进制位1的个数
//
//int main()
//{
//	int i = 0;
//	printf("请输入你想查看的数二进制位有几个1：");
//	scanf("%d", &i);
//	int court = 0;
//	while (i)
//	{
//		i& (i - 1);
//		i = i & (i - 1);
//		court++;
//	}
//	printf("%d", court);
//	return 0;
//}


//10&1
//000000000000000000000000001010
//000000000000000000000000000001
//#include<stdio.h>//分别打印数二级制奇数位和偶数位
//
//int main()
//{
//	int a = 10;
//	int i = 0;
//	int b = 0;
//	printf("奇数位\n");
//	for (i = 31; i >= 1; i = i - 2)
//	{
//		b=((a >> i) & 1);
//		printf("%d ", b);
//	}
//	printf("偶数位\n");
//	for (i = 30; i >= 0; i = i - 2)
//	{
//	b= ((a >> i) & 1);
//		printf("%d ", b);
//	}
//
//	return 0;
//}


//#include<stdio.h>//递归实现字符串翻转
//#include<string.h>
//
//void reseve_arr(char* arr)
//{
//	int right = strlen(arr) - 1;
//
//	 char tmp = arr[0];
//	arr[0] = arr[right];//现将最后一个字符放到第一个字符
//	arr[right] = '\0';//再将最后原来一个字符位置换成0
//	if (strlen(arr+1) >= 2)//判断是否1个字符和0
//		reseve_arr(arr + 1);
//	arr[right] = tmp;//最后将第一个字符翻到最后
//}
//
//int main()
//{
//	char arr[] = "skdfhsd";
//	int left = 0;
//	reseve_arr(arr);
//	
//	printf("%s", arr);
//
//	return 0;
//}


#include<stdio.h>//递归打印次方

double pow(int x, int n)
{
	if (n == 0)
	{
		return 1;
	}
	if (n > 0)
	{      //原来数   //x的n-1次方
		return x * pow(x, n - 1);
	}
	if(n<0)
	{             //‘-’使函数走大于0的递归
		return (1.0 / (pow(x, -n)));
	}
}
int main()
{
	int x = 0;
	int n = 0;
	printf("请输入x的n次方:");
	scanf("%d%d", &x, &n);
	double ret = pow(x, n);
	printf("%lf", ret);
	return 0;
}