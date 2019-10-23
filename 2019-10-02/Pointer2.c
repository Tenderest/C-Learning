#include<stdio.h>
#include<stdlib.h>
int main(void){
	int x,y;
	x = 100;
	y = 200;
	int *p1,*p2;
	p1 = &x;
	p2 = &y;
	printf("x + y = %d\n", *p1 + *p2);
	printf("指针p1的地址=%p\n指针p2的地址=%p\n", p1, p2); 
	// *p代表地址里的存放的东西，p代表地址	
	return 0;
}
