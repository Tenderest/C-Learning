/* 二维数组用指针处理的例子 */
#include<stdio.h>
#define ROWS 4
#define COLS 5
int main( void )
{
        int d_ar[ ROWS ][ COLS ]={ 
         /*  d_ar  d_ar[0]行*/ { 1,   2,  3,  333,  5 },
         /* d_ar+1 d_ar[1]行*/ { 6,   7,  22,  9, 10 },
         /* d_ar+2 d_ar[2]行*/ { 55555, 48, 13, 99, 1 },
         /* d_ar+3 d_ar[3]行*/ { 11, 48, 13, 99, 4444 }
        };
        
        int * ptr;
        // 数组名即地址，所以d_ar的地址与d_ar[ 0 ] 和 d_ar[ 0 ][ 0 ]的地址相同，可用下面的语句测试
        printf("\t\t&d_ar = %p\t &d_ar[ 0 ] = %p\t &d_ar[ 0 ][ 0 ] = %p\n", d_ar, d_ar[ 0 ], &d_ar[ 0 ][ 0 ]);
        printf("\t\td_ar = %p \n",   d_ar           ); // 输出数组的首地址
        printf("\t\td_ar = %d \n",   *(*(d_ar+2)+0) ); // d_ar+2是数组往下移2行*(d_ar+2 )是该行的首地址，*( *( d_ar+2)+0)是第3行第1个元素的值
        printf("\t\td_ar = %d \n",   d_ar[3][4]     ); // 普通的使用，建议
        printf("\t\td_ar = %d \n",   *(*(d_ar+0)+3) ); // 同第二个用法，一般不建议使用比较复杂
        printf("\t\td_ar = %d \n",   *(*(d_ar+1)+2) ); // 因为是二维数组所以需要两次**来取值
        printf("\t\td_ar = %d \n",   *(*(d_ar+2)+4) );
        // 
        //
        // 因为   zippo[0] 是其首元素   zippo[0][0] 的地址，所以 *(zippo[0]) 代表存储在 zippo[0][0] 中的数值
        // 同样   *zippo   代表其首元素 zippo[0]  的值，但 zippo[0] 本身是一个int数的地址，即 zippo[0] == &zippo[0][0] （表示的地址相同）
        // 因此   *zippo   是           &zippo[0][0] 。对这两个表达式同时使用*间接运算符（取值）
        // 将得到 **zippo 等价于 *&zippo[0][0] ，后者简化后，即为一个int数 zippo[0][0]
        //
        //
        // 简单的说， zippo 是 地址 的 地址 ，需要两次取值才能得到通常的数值。地址的地址或指针的指针是双重间接的典型例子。
        // 因为 d_ar[0] 是其首元素 d_ar[0][0] 的地址，所以 *(d_ar[0]) 代表存储在 d_ar[0][0] 中的数值
        // 因为 d_ar[1] 是其首元素 d_ar[1][0] 的地址，所以 *(d_ar[1]) 代表存储在 d_ar[1][0] 中的数值
        // 因为 d_ar[2] 是其首元素 d_ar[2][0] 的地址，所以 *(d_ar[2]) 代表存储在 d_ar[2][0] 中的数值
        // 因为 d_ar[3] 是其首元素 d_ar[3][0] 的地址，所以 *(d_ar[3]) 代表存储在 d_ar[3][0] 中的数值
        // 简单的说， d_ar 是 地址 的 地址 ，需要两次取值才能得到通常的数值。地址的地址或指针的指针是双重间接的典型例子。
        // 因为 d_ar 是其首元素 d_ar[0] 的地址，所以 *d_ar 代表存储在 d_ar[0] （这个是地址）中的数值即一个地址
        return 0;
}
