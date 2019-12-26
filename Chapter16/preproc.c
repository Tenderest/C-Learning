/* 简单的预处理器的例子 */
#include <stdio.h>
#define TWO 2
#define OW "Consistency is the last refuge of the unimagina\
tive. - Oscar Wilde" 
/* 反斜杠把这个定义延续到下一行 空格也在定义里面*/
#define FOUR TWO*TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d.\n"
int main(void)
{
        int x = TWO;
        PX;
        x = FOUR;
        printf(FMT, x);
        printf("%s\n", OW);
        printf("TWO: OW\n");
        return 0;
}
