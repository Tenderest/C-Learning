/* 十进制-二进制 函数递归实现*/
/* 十进制变二进制，如果是奇数最后以为必定是1,偶数必定是0*/
#include<stdio.h>
void ten_two( unsigned long shi );
int main( void )
{
	unsigned long shi;
	printf( "请输入一个十进制的数( q to quit )：" );
	while( scanf( "%lu", &shi ) == 1 ){//scanf读入一个数
		printf( "转换成二进制数是：");
		ten_two( shi );//调用函数进行运算
		printf( "\n" );
		printf( "请输入一个十进制的数( q to quit )：" );
	}
	printf( "退出。" );
	return 0;
}

void ten_two( unsigned long shi )
{
	int r; //定义二进制的位数
	r = shi % 2;//进行运算得到位数
	if ( shi >= 2 )//判断数是不是大于等于2
		ten_two( shi / 2 );//让数除以2,减少一位,进行下一步运算
	putchar( '0' + r );//输出位数
}

//         r
// 3 % 2 = 1 取出二进制位数
//        shi
// 3 / 2 = 1 整数运算,然后进行下一步运算
//
//因为1 >= 2 不成立所以直接跳到putchar( '0' + two )
//即是putchar( '0' + 1 )
//
//输出11
//
//
//
// 4 >= 2 成立
// 4 % 2 = 0
// 4 / 2 = 2
//
// 2 >= 2成立
// 2 % 2 = 1
// 2 / 2 = 1
//
// 1 >= 2不成立
// 直接putchar( '0' + 1 )
//
// 输出110
