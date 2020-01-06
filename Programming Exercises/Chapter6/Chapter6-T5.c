// 第六章编程题第5题
// Page 150 T5
// 每行输出一个整数，及它的平方，立方，设置上限下限
// 2    4   8
// 3    9   27
// 4    16  64
#include<stdio.h>
#include<math.h>
int main( void )
{

        int min, max;
        int index;
        printf("请输入下限和上限：\n");
        printf("下限：");
        scanf("%d",&min);
        printf("上限：");
        scanf("%d",&max);
        printf("原数\t平方\t立方\n");
        for ( ; min < max + 1; min ++ )
        {
                printf("%d\t%d\t%d\n", min, min*min, min*min*min);
        }
        return 0;
}
