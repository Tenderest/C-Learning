/* 使用条件编译 */
#include<stdio.h>
#define JUST_CHECKING
#define LIMIT 4
int main(void)
{
        int i;
        int total = 0;
        for ( i = 1; i <= LIMIT; i ++ )
        {
                total += 2 * i * i + 1;
#ifdef JUST_CHECKING
                printf("i = %d, running total = %d\n", i, total);
#endif
        }
        printf("Grand total = %d\n", total);
        return 0;
}
// #ifdef、#else和#endif指令
// 以下有两种形式
/* #ifdef MAVIS */
/*     #include "horse.h" // 如果已经用#define定义了MAVIS，则执行这里的指令 */
/*     #define STABLES 5 */
/* #else */
/*     #include "cow.h" // 如果没有用#define定义了MAVIS，则执行这里的指令 */
/*     #define STABLES 15 */
/* #endif */

/* #ifdef MAVIS */
/* #   include "horse.h" // 如果已经用#define定义了MAVIS，则执行这里的指令 */
/* #   define STABLES 5 */
/* #else */
/* #   include "cow.h" // 如果没有用#define定义了MAVIS，则执行这里的指令 */
/* #   define STABLES 15 */
/* #endif */
