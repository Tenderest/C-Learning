/* 函数、数组和指针 */
// 由于数组名就是数组首元素的地址，所以如果实际参数是一个数组名，那么形式參量必须是与之匹配的指针。
// 仅在这种场合中，C对于int ar[  ]和int *ar作出同样的解释，即ar是指向int的指针
//   int dates[ size ]
//   dates + 2 == &dates[ 2 ] 两个是相同的地址
//   * ( dates + 2 ) == dates[ 2 ] 两个是相同的值
//   * ( dates + 2 ) dates第三个元素的值
//   * dates + 2 第一个元素的值和2相加
#include<stdio.h>
int sum1 ( int ar[  ], int n );// int ar[  ] 只有在声明形式参量才能这么用
int sum2 ( int * ar, int n );
int main( void )
{
        // 用一个函数对一个数组所有元素求和
        int n = 5;
        int array[ n ];
        int index;
        // 用循环给数组赋值
        for ( index = 0; index < 5; index ++ )
        {
                array[ index ] = 1 + index;
                printf("array[ %d ] = %d\n",index, array[ index ]);
        }
        // 用函数计算数组中所有元素的和
        int add1, add2;
        add1 = sum1 ( array, n );
        add2 = sum2 ( array, n );
        printf("一个int类型的大小（字节）是%d\n这个数组的大小（字节）是%zd\n",sizeof ( int ), sizeof ( array ) );
        printf("用sum1求出数组中所有元素的和 = %d\n",add1);
        printf("用sum2求出数组中所有元素的和 = %d\n",add2);
        return 0;
}

int sum1 ( int ar[  ], int n ) // int ar[  ] 只有在声明形式参量才能这么用
{
        int total = 0;
        int index;
        for ( index = 0; index < n; index ++ )
        {
                total = total + ar[ index ]; // ar[ index ] 与 * ( ar + index ) 相同
        }
        return total;
}


int sum2 ( int * ar, int n )
{
        int total = 0;
        int index;
        for ( index = 0; index < n; index ++ )
        {
                total = total + * ( ar + index ); // 指针的值+1然后再用间接运算符取值
        }
        return total;
}
