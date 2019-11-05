/* 一个一维数组的简单使用 */
#include<stdio.h>
int main( void )
{
        int array [ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; //
        int index, max;
        max = sizeof array / sizeof array[ 0 ]; //让编译器计算数组元素个数,sizeof给出其后对象或类型的大小（以字节为单位），因此sizeof array是整个数组的大小-->
                                                //sizeof array [ 0 ]是一个元素的大小（以字节为单位）。整个数组的大小除以单个元素的大小就是这个数组中元素的数目
        for ( index = 0; index < max; index ++ )
        {
                printf("array[ %d ] = %d\n",index, array[ index ]);
        }

        return 0;
}
