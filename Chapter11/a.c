/* 二维字符串数组 */
#include<stdio.h>
#define LIM 5
int main(void)
{
        char *mytal[LIM] = { "Add numbers swiftly", 
              "Multiplying accurately", "Stashing data", 
              "Following instructions to the letter", 
              "Understanding the C language"};
        // mytal是一个由5个指向char指针组成的数组。
        // 也就是说，mytal是一个一维数组，而且数组里没一个元素都是一个char类型的地址。
        // 第一个指针的地址是mytal[0]， 它指向第一个字符串的第一个字符。
        // 第二个指针是mytal[1]，它指向第二个字符串的开始
        // 以此类推，类似二维数组，实际上不是。
        // mytal数组实际上并不存放字符串，它只是存放字符串的地址。
        // 可以把mytal[0]看作第一个字符串，*mytal[0]表示第一个字符串的第一个字符。
        // 由于数组符号和指针的特殊关系，也可以用mytal[0][0]表示第一个字符串的第一个字符。

        int index;
        for ( index = 0; index < 5; index ++ )
        {
                printf("%s\n", mytal[index]);
        }
        
        return 0;
}
