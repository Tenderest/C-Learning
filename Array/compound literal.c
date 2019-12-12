/* 一个复合文字示例 */
/* 由于复合文字没有名称，因此不可能在一个语句中创建它们，然后在另一个语句中调用。 */
/* 而是必须在创建它们的同时通过某种方法来使用它 */
/* 一种方法是使用指针保存其位置 */
#include<stdio.h>
int main(void)
{
        int count[3];
        int * p;
        p = (int []) { 2, 6, 4}; // 复合文字，省略int数组的大小
        p = (int [5]) { 3, 2, 1, 6, 7}; // 复合文字，使用5个大小的int数组
        for ( int index = 0; index < 5; index ++ )
        {
                printf("%d  ", *p ++);
        }
        putchar('\n');
        return 0;
}
