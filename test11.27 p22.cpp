//#include<stdio.h> //指针加法
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}


//#include<stdio.h>   //计算数字数组的元数个数
//
//int my_strlen(int* arr)
//{
//	int* start = arr;
//	int* end = arr;
//	while (*end != 10)
//	{
//		end++;
//	}
//	return end - start+1;
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	int court = my_strlen(arr);
//	printf("%d", court);
//	return 0;
//}


//#include<stdio.h> //strlen函数实现
//
//int my_strlen(char* arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//
//	}
//	return end - start;
//}
//int main()
//
//{
//	char arr[] = "hello the world";
//	int court = my_strlen(arr);
//	printf("%d", court);
//
//	return 0;
//}


//#include<stdio.h>//指针数组
//
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 6;
//	int* arr[] = { &a,&b,&c };
//	int i = 0;
//	for (i=0;i<3;i++)
//	{
//		printf("%d ", * (arr[i]));
//	}
//	return 0;
//}