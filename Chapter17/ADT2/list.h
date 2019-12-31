#ifndef LIST_H
#define LIST_H
#define TSIZE 45

struct film {
        char title[TSIZE];
        int rating;
};
typedef struct film Item;

struct node {
        Item item;
        struct node * next;
};

typedef struct node Node;

typedef Node * List;

/* 初始化 */
void Zero (List * pn);
#endif
