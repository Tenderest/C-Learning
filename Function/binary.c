/* 使用递归来将十进制转换成二进制 */
#include<stdio.h>
void to_binary ( unsigned long n );

int main (void)
{
	unsigned long number;
	printf("输入一个数（按q退出）：");
	while ( scanf("%lu", &number) == 1 )
	{
		printf("转换成二进制数是：");
		to_binary( number );
		putchar('\n');
		printf("输入一个数（按q退出）：");
	}
	printf("完成。\n");
	return 0;
}

void to_binary ( unsigned long n ) //递归函数
{
	int r;
	r = n % 2;
	if ( n >= 2 )
		to_binary ( n / 2 );
	putchar('0' + r);
	return ;
}
