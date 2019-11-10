#include<stdio.h>
#include<stdlib.h>
int main (void)
{
        int lenth = 9;
        int bubble[lenth];
        int index1, index2;
        // 给数组随机初始化
        for ( index1 = 0; index1 < lenth; index1 ++)
        {
                //bubble[index1] = rand() % 10;
                bubble[ index1 ] = 1 + index1;
        }
        // 冒泡排序
        
        // 外部循环控制排序次数， 即排数组大小-1次，有4个元素即排3次即可
        //  |1|3|2|6|
        for ( index1 = 0; index1 < lenth - 1; index1 ++)
        {
                // 内部循环控制排序元素对交换，有4个元素需要排3次
                //  |4|5|8|2|
                for ( index2 = index1; index2 < lenth; index2 ++) // 这里lenth没有-1
                {
                        if ( bubble[index2] < bubble[index1]) // 进行交换
                        {
                                int temp = bubble[index2];
                                bubble[index2] = bubble[index1];
                                bubble[index1] = temp;
                        }
                }
        }
        
        //     输出数组
        for ( index1 = 0; index1 < lenth; index1 ++)
        {
                printf("bubble[%d] = %d\n", index1, bubble[index1]);
        }
        //int a = rand() % 10;
        //printf("%d", a);
        return 0;
}
