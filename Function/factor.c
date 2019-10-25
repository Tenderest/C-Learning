/* 使用循环和函数来计算阶乘 */
#include<stdio.h>
long fact ( int n ); //循环
long rfact ( int n ); //函数
int main(void)
{
	int num;

	printf("这是一个计算阶乘的程序。\n");
	printf("请输入一个0-12之间的数( q 退出)：");
	while( scanf("%d", &num) == 1 )
	{
		if ( num < 0 )
		{
			printf("输入错误！不在范围内。\n");
		}
		else if ( num > 12 )
		{
			printf("输入错误！不在范围内。\n");
		}
		else
		{
			printf("循环：%d的阶乘=%d\n", num, fact (num) );
			printf("函数：%d的阶乘=%d\n", num, rfact (num) );
		}

		printf("请输入一个0-12之间的数( q 退出)：");
	}
	return 0;
}

long fact ( int n )
{
	long ans;

	for ( ans = 1; n > 1; n-- )
	{
		ans *= n;
		//ans = ans * n;
	}
	return ans;
}


long rfact ( int n )
{
	long ans;
	
	if ( n > 0 )
		ans = n * rfact ( n - 1 );
	else
		ans = 1;
	return ans;
}
