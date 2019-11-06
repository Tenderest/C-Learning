/* 用两个指针，一个开始一个结束来操作数组进行求和 */
#include<stdio.h>
int sum1 ( int * start, int * end );// 用两个指针，一个开始一个结束来操作数组进行求和
int main( void )
{
        // 用一个函数对一个数组所有元素求和
        int n = 5;
        int array[ n ];
        int index;
        // 用循环给数组赋值
        for ( index = 0; index < n; index ++ )
        {
                array[ index ] = 1 + index;
                printf("array[ %d ] = %d\n",index, array[ index ]);
        }
        // 用函数计算数组中所有元素的和
        int add1;
        add1 = sum1 ( array, array + n ); // 传递两个地址给函数
        printf("用两个指针给数组求和\n");
        printf("用sum1求出数组中所有元素的和 = %d\n",add1);
        return 0;
}

int sum1 ( int * start, int * end ) 
{
        int total = 0;
        while ( start < end )
        {
                total = total + * start; // 把值累加
                start ++; // 将指针+1指向下一个数组元素
        }
        return total;
}
