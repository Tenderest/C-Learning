// 该函数返回一个指针， 指向s1字符串中第一次出现s2字符串的地方
// 如果s1中没有找到s2字符串，函数就返回空指针
// 字符串和字符串的比较寻找
// 在字符串里搜索一个字符串
#include<stdio.h>
#include<string.h>
int main(void)
{
        char str1[99] = "Li yunfeng";
        char str2[4] = "yug";
        char * pstr;
        pstr = strstr(str1, str2);
        printf("str1[3] = %p\n", &str1[3]);
        printf("pstr = %p\n", pstr);
        return 0;
}
