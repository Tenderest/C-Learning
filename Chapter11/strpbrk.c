// 该函数返回一个指针，指向s1中存放s2字符串中的任何字符的第一个位置
// 如果没有找到任何字符，函数就返回空指针
// 字符串和字符的比较寻找，字符串里搜索字符
// strpbrk(s1, s2)
// strpbrk(const char *__s, const char *__accept) -> char *
#include<stdio.h>
#include<string.h>
int main(void)
{
        char str1[99] = "Li yunfeng";
        char str2[4] = "yfn";
        char * pstr;
        pstr = strpbrk(str1, str2);
        printf("str1[3] = %p\n", &str1[3]);
        printf("pstr = %p\n", pstr);
        return 0;
}
