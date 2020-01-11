#include <stdio.h>
int main(void)
{
    int ages;
    int year = 365;
    printf("Please enter your age: ");
    scanf("%d", &ages);
    printf("Your age is %d days is %d\n", ages, ages * year);
    return 0;
}