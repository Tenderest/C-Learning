#include<stdio.h>
#include"volum.h" //引入本地函数头文件
//volum.h中包含一个volum等函数的声明和定义
//int volum( int a, int b, int c);
//int add_number(int a, int b, int c);
//void print_how(void);
int main(void)
{
	int x,y,z,v,add;
	printf("请输入三个数，用空格隔开：");
	scanf("%d%d%d", &x, &y, &z);
	v = volum(x, y, z); //使用本地函数头文件中的volum函数
	printf("v = %d\n", v);
	add = add_number(x,y,z);
	printf("add = %d\n", add);

	print_how();

	return 0;
}
