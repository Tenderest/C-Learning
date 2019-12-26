/* names.h 头文件 */
/* names_st.h -- names_st 结构的头文件 */
// 常量

#define SLEN 32

// 结构声明
struct name_st
{
        char first[SLEN];
        char last[SLEN];
};

// 类型定义
typedef struct name_st names;

// 函数原型
void get_names (names *);
void show_names (const names *);
