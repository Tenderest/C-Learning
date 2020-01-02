/* 测试Queue接口的驱动程序 */
/* compile with queue.c */
#include <stdio.h>
#include "queue.h" // 限定queue，Item

int main(void)
{
        Queue line;
        Item temp;
        char ch;

        InitializeQueue(&line);
        puts("Testing the Queue interface. Type a to add a value, ");
        puts("type d to delete a value, and type q to quit.");
        while ((ch = getchar()) != 'q')
        {
                if (ch != 'a' && ch != 'd') /* 定义Queue，Item */
                {
                        continue;
                }
                if (ch == 'a')
                {
                        printf("Integer ot add: ");
                        scanf("%d", &temp);
                        if (!QueueIsFull(&line))
                        {
                                printf("Putting %d into queue\n", temp);
                                EnQueue(temp, &line);
                        }
                        else
                        {
                                puts("Queue is full!");
                        }
                }
                else // ch == 'q'
                {
                        if(QueueIsEmpty(&line))
                        {
                                puts("Nothing to delete!");
                        }
                        else
                        {
                                DeQueue(&temp, &line);
                                printf("Removing %d from queue\n", temp);
                        }
                        
                }
                printf("%d items in queue\n", QueueItemCount(&line));
                puts("Type a to add, d to delete, q to quit: ");
        }
        EmptyTheQueue(&line);
        puts("bye!");
        return 0;
}
