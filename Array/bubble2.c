#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main (void)
{
        int lenth = 4;
        int bubble[lenth];
        int index1, index2;
        // 给数组随机初始化
        for ( index1 = 0; index1 < lenth; index1 ++)
        {
                //bubble[index1] = rand() % 10;
                bubble[index1] = 1 + index1;
        }
        _Bool swaped = true;
        
        // 排序
        while ( swaped )
        {
                for ( index1 = 0; index1 < lenth; index1 ++)
                {
                        for ( index2 = 0; index2 < lenth; index2 ++)
                        {
                                if ( bubble[index2] > bubble[index1]) // 如果大于就往后放
                                {
                                    int temp = bubble[index2];
                                    bubble[index2] = bubble[index1];
                                    bubble[index1] = temp;
                                }
                        }
                }
                swaped = false;
        }
        
        //
        for ( index1 = 0; index1 < lenth; index1 ++)
        {
            printf("bubble[%d] = %d\n", index1, bubble[index1]);
        }
        return 0;
}
