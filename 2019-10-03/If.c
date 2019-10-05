#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main(void){
	unsigned long num; //要检查的数
	unsigned long div; //可能的素数
	bool isPrime; //素数标志
	printf("Please enter a number:");
	printf("Enter q to quit.\n");
	while( scanf("%lu", &num) == 1 ){
		for( div = 2, isPrime = true; (div * div) <= num; div++ ){
			if( num % div == 0){
				if( ( div * div ) != num ){
					printf ("%lu is divisible by %lu and %lu.\n", num, div, num/div);
				}else{
					printf("%lu is divisible by %lu.\n", num, div);
				}
				isPrime = false; //不是一个素数
			}
		}
		if(isPrime){
			printf("%lu is prime\n", num);
		}
		printf("Please enter a number:");
		printf("Enter q to quit.\n");
	}
	return 0;
}
