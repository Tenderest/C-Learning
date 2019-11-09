/* 使用数组来排序 */
#include<stdio.h>
int main (void) {
        //用数组来输入几个数并排序
        int n,  max, temp, index, index2, i;
        printf("请输入想要排序多少个数：");
        scanf("%d",&n);
        int array[n];
        for ( i = 0; i < n; i ++ )
        {
                printf("请输入第%d个数：",i + 1);
                scanf("%d",&array[ i ]);
        }
        // 输出数组中的各个元素
        printf("排序前：\n");
        for (index = 0; index < n; index ++)
        {
            printf("array[%d] = %d \n", index, array[index]);
        }

        // 找出最大的元素，最大的放前面，交换位置

        for (index = 0; index < n; index ++)
        {
                //从数组的第一个元素开始寻找最大的，并把它放在这个元素这里
                //比如从第一个元素开始，找到最大的元素以后，交换它们
                //然后再进行第二个元素，找到最大元素以后，交换它们
                //然后再进行第三个元素，找到最大元素以后，交换它们
                
                temp = index; //缓存这个元素，用这个元素和其他元素进行比较

                // 用比index大1的，即下一个元素来比较，同时这个元素的下标不能超过数组的最大位数
                // 最后一个是剩下的不用再比较交换了
                for ( index2 = index + 1; index2 < n; index2 ++) 
                {
                        if ( array[temp] < array[index2])
                        {
                            temp = index2;
                            //更新temp的值，使之变成最大的那个元素
                            //判断的条件就会改变
                        }
                }
            //交换数组的元素，最大的放在前面
            //index的值每次循环都会改变，即从第一个元素变到最后一个元素
            max = array[temp];
            array[temp] = array[index];
            array[index] = max;
        }

        printf("排序后：\n");
        for (index = 0; index < n; index ++)
        {
            printf("array[%d] = %d \n", index, array[index]);
        }
        return 0;
}
