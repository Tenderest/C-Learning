/* 结构的其他特性 */
/* 允许把一个结构赋值给另一个结构，不能对数组这样做！！ */
/* o_data = n_data; // 把一个结构赋值给另一个结构 */
/* 这样就使o_data 的每个成员都被赋成n_data 相应成员的值 */
/* 即使有一个成员是数组也照样完成赋值 */
/* 注意是同一种结构，不同的结构也不可以 */
#include<stdio.h>
struct names {
        char L[3];
        char Y[5];
};
int main(void)
{
        struct names first = {
                "Li",
                "None"
        };
        struct names last;
        struct names last = first; // 把一个结构赋值给另一个结构
        printf("%s %s\n", first.L, first.Y );
        printf("%s %s\n", last.L, last.Y);
        return 0;
}
