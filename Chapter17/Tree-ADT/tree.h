/* tree.h 二叉搜索树    */
/* 树中不允许有相同项目 */
#ifndef _TREE_H_
#define _TREE_H_
#include <stdbool.h>

/* 您可以把Item重新定义为合适的类型 */
typedef struct item {
    char petname[20];
    char petkind[20];
} Item;

#define MAXITEMS 10

typedef struct node {
    Item item;
    struct node * left;  /* 指向左分支的指针 */
    struct node * right; /* 指向右分支的指针 */
} Node;

typedef struct tree {
    Node * root; /* 指向树根的指针 */
    int size;    /* 树中项目的个数 */
} Tree;

/* 函数原型 */

/* 操作：把一个树初始化为一个空树 */
/* 操作前：ptree指向一个树        */
/* 操作后：该树已被初始化为空树   */
void InitializeTree (Tree * ptree);

/* 操作：确认树是否为空                           */
/* 操作前：ptree指向一个树                        */
/* 操作后：如果树为空则函数返回true;否则返回false */
bool TreeIsEmpty (const Tree * ptree);

/* 操作：确定树是否已满                           */
/* 操作前：ptree指向一个树                        */
/* 操作后：如果树为空则函数返回true;否则返回false */
bool TreeIsFull (const Tree * ptree);

/* 操作：确定树中项目的个数       */
/* 操作前：ptree指向一个树        */
/* 操作后：函数返回树中项目的个数 */
int TreeItemCount (const Tree * ptree);

/* 操作：向树中添加一个项目                                           */
/* 操作前：pi是待添加的项目的地址，ptree指向一个已经初始化的树        */
/* 操作后：如果可能，函数把项目添加到树中并返回true;否则函数返回false */
bool AddItem (const Item * pi, Tree * ptree);

/* 操作：在树中查找一个项目                               */
/* 操作前：pi指向一个项目，ptree指向一个已经初始化的树    */
/* 操作后：如果该项目在树中，则函数返回true;否则返回false */
bool InTree (const Item * pi, const Tree * ptree);

/* 操作：从树中删除一个项目                                           */
/* 操作前：pi是待删除的项目的地址，ptree指向一个已经初始化的树        */
/* 操作后：如果可能，函数从树种删除该项目并返回true;否则函数返回false */
bool DeleteItem (const Item * pi, Tree * ptree);

/* 操作：把一个函数作用于树的每一个项目                                              */
/* 操作前：ptree指向一棵树，pfun指向一个没有返回值的函数，该函数接收一个Item作为参数 */
/* 操作后：pfun指向的函数被作用于树中每个项目一次                                    */
void Traverse (const Tree * ptree, void (* pfun) (Item item));

/* 操作：从树种删除所有节点            */
/* 操作前：ptree指向一个已经初始化的树 */
/* 操作后：该树为空树                  */
void DeleteAll (Tree * ptree);

#endif
