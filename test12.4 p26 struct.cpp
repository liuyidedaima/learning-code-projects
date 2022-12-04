#include <stdio.h>
struct stu
{
	char name[30];
	int age;
	char tele[12];

}lihua;//全局结构名

struct s
{
	char sex[5];
	struct stu lihua;//双重结构体
}human;


int main()
{
	human = { "男",{"李华",18,"17273728778"} };
	printf("%s ", human.sex);
	printf("%s", human.lihua.name);//双重结构体访问使用'.'

	struct s* Human = &human;
	printf("%s ", Human->lihua.name);//双重结构体访问使用'指针'
	return 0;
}


//
//#include <stdio.h>
//
//typedef struct stu//main函数前定义
//{
//	char name[30];
//	int age;
//	char tele[12];
//	char sex[10];
//
//}stu;//typedef 重新给struct stu 命名为stu
//
//void print1(stu* lihua)//指针访问
//{
//	printf("name: %s\n", lihua->name);
//	printf("age: %d\n", lihua->age);
//	printf("tele: %d\n", lihua->tele);
//	printf("sex: %s\n", lihua->sex);
// }
//
//void print2(stu lihua)
//{
//	printf("name: %s\n", lihua.name);
//	printf("age: %d\n", lihua.age);
//	printf("tele: %d\n", lihua.tele);
//	printf("sex: %s\n", lihua.sex);
//}
//
//
//	int main()
//{
//	stu lihua = { "李华",18,"18289123393","男" };
//	print1(&lihua);
//	print2(lihua);
//	return 0;
//}