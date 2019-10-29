/* 输出每个数的次方和，如1的2次方+2的2次方+3的3次方的和*/
#include<stdio.h>
long sumPower( int n, int k );
long power( int n, int k );
int main( void )
{
	int n, k;
	long sumpower, numpower;
	/* sumpower总的次方和，number单个数的次方 */
	/* n是最后一个数，k是多少次方 */
	printf("请输入多少个数：");
	scanf("%d",&n);
	printf("请输入多少次方：");
	scanf("%d",&k);
	printf("需要计算的是从1到%d的%d次方的和。\n", n, k);
	/* 开始计算 */	
	sumpower = sumPower( n, k ); /* 计算次方相加 */
		/* sumPower( n, k ); */
	printf("从1到%d的%d次方的和 = %d",n, k, sumpower);
	return 0;
}

/* 计算每个数的多少次方 */
long power( int n, int k )
{
	int i; /* 控制循环多少次，即多少次方 */
	/* 2^3即循环3次底数是2,次数是3 */
	int num = 1; /* 用来存放结果 */
	for( i = 0; i < k; i++ )
		num = num * n;
	return num;
}

long sumPower( int n, int k )
{
	/* 控制加的次数 */
	/* 1^2+2^2+3^2 */
	/* 即3次 */
	int i; /* 控制循环 */
	/* 添加一个变量存储各个数次方的和 */
	long tempadd = 0;
	for( i = 1; i <= n; i++ )
		tempadd = tempadd + power( i, k ); /* 传递给power求次方的数值 */
	/* i  */			/* 这里即1^2 */
	/*    */			/* 这里即2^2 */
	/* 1  传递给power中的n，即底数*//* 这里即3^2 */
	/* 2  */
	/* 3  */
	return tempadd;
}
