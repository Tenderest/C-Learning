//int volum( int a, int b, int c);

int volum( int a, int b, int c)
{
	int p;
	p = a*b*c;
	return p;

}

int add_number(int a, int b, int c)
{
	int d;
	d = a+b+c;
	return d;

}

void print_how(void)
{
	printf("通过一个自己编写的头文件中的函数来完成动作\n函数的声明和定义在volum.h中。\n");
	printf("需要在源代码中引入本地头文件，用引号引入本地头文件，然后就可以使用自定义的函数。\n");
	printf("每次更改过头文件里的函数功能后需要重新编译一次才能更新可执行文件中的函数功能。");
	printf("\n");
}
