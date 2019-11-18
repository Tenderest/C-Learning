//C Primer Plus上一个统计输入字符和空格回车的代码
//2019-10-12
#include<stdio.h>
#include<ctype.h>
#define STOP '#'
int main(void){
	//printf("Hello World!");
	int word,space,cr;
	word = 0; //没有初始化一直显示错误的数值
	char ch;
	ch = getchar();
	//scanf("%c", &ch);
	while( ch != STOP){
		if(ch == '\n'){
			cr++;
		}else if( ch == ' ' ){
			space++;
		}else{
			word++;
		}
		ch = getchar();
		//scanf("%c", &ch);
	}
	printf("word=%d\tspace=%d\tcr=%d\n", word, space, cr);
	return 0;
}
