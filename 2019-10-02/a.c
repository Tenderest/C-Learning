#include<stdio.h>
#include<stdlib.h>
int main(void){
/*	int x,y;
	x = 100;
	y = 200;
	int *p1,*p2;
	p1 = &x;
	p2 = &y;
	printf("x + y = %d\n", *p1 + *p2);
	printf("指针p1的地址=%p\n指针p2的地址=%p\n", p1, p2); 
	// *p代表地址里的存放的东西，p代表地址	
*/
	int *p;
	p = ( int *)malloc( 1 ); //动态分配内存
	if( p == NULL ){
		printf("内存分配失败。");
		exit(-1);
	}
	*p = 100;
	printf("指针*p的内容= %d\n", *p);
	free(p);
	printf("指针*p的地址= %p\n", p);
	return 0;
}
