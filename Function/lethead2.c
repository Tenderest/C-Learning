#include<stdio.h>
#include<string.h> /* 为strlen()函数提供原型 */
#define NAME "GIGATHINK, INC. "
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40
#define SPACE ' '

//void starbar(void); /*声明函数原型*/

void show_n_char (char ch, int num );

int main(void)
{
	int spaces;

	show_n_char('*', WIDTH ); //使用常量做参数
	putchar('\n');
	show_n_char(SPACE, 12);//使用常量做参数
	printf("%s\n", NAME);
	spaces = ( WIDTH - strlen( ADDRESS ) ) / 2; //让程序计算，需要跳过多少空格

	show_n_char(SPACE, spaces); //用一个变量作为参数
	printf("%s\n", ADDRESS);
	show_n_char(SPACE, ( WIDTH - strlen( PLACE ) ) / 2 ); //用一个表达式作为参数
	printf("%s\n", PLACE);
	show_n_char('*', WIDTH);
	putchar('\n');
	return 0;
}

/* lethead1.c中的函数 */
//void starbar(void) /* 定义函数 */
//{
//	int count;
//	for( count = 1; count <= WIDTH; count++)
//		putchar('*');
//	putchar('\n');
//}


void show_n_char(char ch, int num)
{
	int count;
	for(count = 1; count <= num; count++)
		putchar(ch);
}
