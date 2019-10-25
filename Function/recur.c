/* 函数的递归举例 */
#include<stdio.h>
void up_and_down(int n ); //分号的作用表示是在声明函数而不是函数定义
int main(void)
{
	up_and_down(1);	
	printf("执行完毕。");
	return 0;
}

void up_and_down( int n )
{
	printf("现在是第%d级\tn的值是：%d\tn的地址是%p\n", n, n, &n); //第一个输出
	if ( n < 4 )
		up_and_down( n + 1 );
	printf("返回：现在是第%d级\tn的值是：%d\tn的地址是%p\n", n, n, &n); //第二个输出
}
