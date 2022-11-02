
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	while (a < 10)
//	{
//		a++;
//		if (7 == a)
//			continue;
//			printf("%d\n", a);
//	}
//	return 0;
//}


//int main()//switch的简单使用
//{
//	int day = 0;
//	printf("请输入一个数字查询星期:");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		
//	case 2:
//		
//	case 3:
//		
//	case 4:
//		
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//		
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	printf("请输入一个数字查询星期:");
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	default:
//		printf("输入错误");
//	}
//	return 0;
//}

//int main()//1到100的奇数
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;
//	}
//	return 0;
//}


//int main()//1到100的奇数
//{
//	int a = 1;
//	while (a <= 100)
//	{
//		if(a % 2 == 1)
//		printf("%d ", a);
//		a++;
//	}
//	return 0;
//}


//struct book//结构体的建立
//{
//	char name[20];
//	int price;
//};
//
//
//
//int main()
//{
//    struct book b1{"cyy",55 };
//	struct book* pb = &b1;
//	printf("%s\n",pb->name);
//	return 0;
//}


//#include<stdio.h>
//#define MAX(X,Y) (X>Y?X:Y)//比较大小的简便方法
//int main()
//{
//	int a, s, d;
//	a = 10;
//	s = 20;
//	d = MAX(a,s);
//	printf("d=%d\n", d);
//	return 0;
//}


//int ADD(int a, int b)
//{
//	int z = 0;
//	z = a + b;
//}
//int main()
//{
//	int num1, num2;
//	scanf("%d%d", num1, num2);
//	int sum = ADD(num1, num2);
//	return 0;
//}

//int main()//输出数字而屏蔽字母
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//		printf("%d\n", ch);
//	}
//
//	return 0;
//}


int main()//缓冲区的空格使用while语句清除
{
	char ch;
	int password[20]={0};
	printf("请输入密码：>");
	scanf("%s", &password);
	printf("请确定(T/F)：>");
	while (getchar() != '\n')
	{
		;
	}
	ch = getchar();
	if (ch == 'T')
	{
		printf("你已经确定");
	}
	else
		{
		printf("确定失败");
		}
	return 0;
}