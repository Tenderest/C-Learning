#include <stdio.h>
int main(void)
{
    double Year_Second = 3.156e+7;
    printf("One year have %lf seconds.\n", Year_Second);
    int ages;
    printf("Enter your age: ");
    scanf("%d", &ages);
    printf("The age have %lf seconds.\n", ages * Year_Second);
    return 0;
}