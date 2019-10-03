#include<stdio.h>
#include<stdlib.h>
int main(void){
	int div,num;
	printf("Please enter a number:");
	scanf("%d", &num);
	for(div = 2; (div * div) <= num ; div++ ){
		if( num % div == 0 ){
			if( (div * div) != num){
				printf("%d is divisible by %d and %d . \n", num, div, num/div);
			}else{
				printf("%d is divisible by %d . \n", num, div);
			}
			
		}
	}
	return 0;
}
