#include<stdio.h>
#define MAX 100
int main( void )
{
    int score[ MAX ];
    int i = 0, num;
    float sum = 0.0f;
    printf("遇到0i停止输入！\n");
    do
    {
            printf("请输入分数：");
            scanf("%d",&score[ i ]);
    }while ( score[ i++ ]>0);
    num = i - 1;
    for ( i = 0; i < num; i ++ )
        sum += score[ i ];
    printf("所有成绩的平均数为：%.2f", sum/sum);
    return 0;
}
