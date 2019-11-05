/* 两种获得数组地址的方式 */
#include<stdio.h>
int main( void )
{
        int ar[ 2 ] = { 1, 2 };
        int * par1, * par2;
        /* 两种获取数组地址的形式 */
        /* 1.数组名即数组的首地址*/
        /* 2.数组的第一个元素的地址 */
        par1 = ar;
        par2 = &ar[ 0 ];
        printf("par1's address = %p\npar2's address = %p\n",par1, par2);
        return 0;
}
