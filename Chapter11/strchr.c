/* 搜素指定字符串中的某个字符，并返回存放这个字符的第一个位置的指针 */
// strchr是第一次出现的地方，strrchr是最后一次出现的地方
// 标志结束的空字符也是字符串的一部分，因此也能搜索到
// 如果没有找到该字符，则返回空指针(NULL)
// 字符串和字符的比较寻找，字符串里搜索字符
// strchr(const char *__s, int __c) -->（返回） char *
#include<stdio.h>
#include<string.h>
int main(void)
{
        char target[99] = "Hello";
        //
        // strchr
        //
        char * pstr;
        pstr = strchr(target, '\0');
        printf("target[5] = %p\n", &target[5]);
        printf("pstr = %p\n", pstr);
        return 0;
}
