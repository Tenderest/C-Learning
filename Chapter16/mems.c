/* 使用memcpy()和memmove()函数 */
/* 原型： */
/* void *memcpy (void * restrict s1, const void * restrict s2, size_t n); */
/* void *memmove (void *s1, const void *s2, size_t n); */
/* 这两个函数均从s2指向的位置复制n字节数据到s1指向的位置，且均返回s1的值 */
/* 两者之间的区别由关键字restrict造成，即memcpy()可以假定两个内存区域之间没有重叠 */
/* 然后再复制到最终目的地。 */
/* 第三个参数指定要复制的字节数。注意：对数组而言，字节数一般不等于元素的个数。 */
/* 因此要复制10个double值组成的数组，应该使用10*sizeof(double)作为第三个参数而不是使用10。 */
#include<stdio.h>
#include<string.h> // 包含memcpy()和memmove()
#include<stdlib.h>
#define SIZE 10
void show_array (const int ar[], int n);

int main(void)
{
        int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int target[SIZE];
        double curious[SIZE / 2] = {1.0, 2.0, 3.0, 4.0, 5.0};

        puts("memcpy() used:");
        puts("values (original data): ");
        show_array(values, SIZE);
        memcpy(target, values, SIZE * sizeof(int));
        puts("target (copy of values): ");
        show_array(target, SIZE);

        puts("\nUsing memmove() with overlapping ranges: ");
        memmove(values + 2, values, 5 * sizeof(int));
        puts("values -- elements 0-5 copied to 2-7: ");
        show_array(values, SIZE);

        puts("\nUsing memcpy() to copy double to int: ");
        memcpy(target, curious, (SIZE / 2) * sizeof(double));
        puts("target -- 5 double int 10 int positions: ");
        show_array(target, SIZE);
        return 0;
}
void show_array(const int ar[], int n)
{
        int i;
        for ( i = 0; i < n; i ++ )
        {
                printf("%d ", ar[i]);
        }
        putchar('\n');
}
