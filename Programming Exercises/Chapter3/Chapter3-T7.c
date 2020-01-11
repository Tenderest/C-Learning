#include <stdio.h>
int main(void)
{
    // 1 inch = 2.54 cm
    int Inchs;
    double CM = 2.54;
    printf("Please enter your hight: ");
    scanf("%d", &Inchs);
    printf("Change to CM is: %lf\n", Inchs * CM);
    return 0;
}