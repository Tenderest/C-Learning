/* 使用qsort()对一组数字排序 */
#include<stdio.h>
#include<stdlib.h>
#define LEN 10
void show_arry ( const int * );
int mycomp ( const void *, const void * );
int main(void)
{
        int ar[LEN] = {
                9, 2, 5, 1, 6, 3, 8, 4, 7, 0
        };
        /* for ( int i = 0; i < LEN; i ++ ) */
        /* { */
        /*         scanf("%lf", &ar[i]); */
        /* } */
        printf("未排序：\n");
        show_arry(ar);
        putchar('\n');
        printf("排序后：\n");
        qsort(ar, LEN, sizeof(int), mycomp);
        show_arry(ar);
        return 0;
}
void show_arry( const int * ar )
{
        for ( int i = 0; i < LEN; i ++ )
        {
                printf("%d\t", ar[i]);
                if ( i % 5 == 4 )
                {
                        putchar('\n');
                }
        }
        putchar('\n');
}
/* 从小到大排序 */
int mycomp ( const void * p1, const void * p2 )
{
        /* 需要使用指向int类型的指针访问值 */
        const int * a1 = (const int *) p1;
        const int * a2 = (const int *) p2;
        if ( *a1 < *a2 )
        {
                return -1;
        }
        else if ( *a1 == *a2 )
        {
                return 0;
        }
        else
        {
                return 1;
        }
}
