/* 和list.c一起编译 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"
int main(void)
{
        List movies;
        List head = NULL;
        List node;
        char input[TSIZE];
        puts("Enter title: ");
        while ( gets(input) != NULL && input[0] != '\0' )
        {
                node = (Node *) malloc(sizeof(Node));
                if ( head == NULL )
                {
                        head = node;
                }
                else
                {
                        movies->next = node;
                }
                node->next = NULL;
                strcpy(node->item.title, input);
                puts("Enter rating <0-10>: ");
                scanf("%d", &node->item.rating);
                while ( getchar() != '\n' )
                {
                        continue;
                }
                puts("Next movies title (empty line to stop): ");
                movies = node;
        }
        /* Zero(&head); */ // 一个简单的初始化接口
        if ( head == NULL )
        {
                printf("No data.\n");
        }
        else
        {
                puts("Here is list: ");
        }
        node = head;
        while ( node != NULL )
        {
                printf("Movie: %s Rating: %d\n", node->item.title, node->item.rating);
                node = node->next;
        }

        node = head;
        while ( node != NULL ) // 修正释放逻辑错误
        {
                head = node->next;
                free(node);
                node = head;
        }
        return 0;
}
