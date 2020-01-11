/* 第五版Page 40 */
#include <stdio.h>
int main(void)
{
    int i = 2147483647;
    unsigned int a = 4294967295; // -1
    printf("i = %d\ti + 1 = %d\ti + 2 = %d\n", i, i + 1, i + 2);
    printf("a = %u\ta + 1 = %u\ta + 2 = %u\n", a, a + 1, a + 2);
    return 0;
}