#include <stdio.h>
#include <stdlib.h>

typedef struct  s_node
{
    int             data;
    struct s_node   *next;
}               t_node;

int main(void)
{
    t_node  *head = NULL;
    t_node  *tail = NULL;
    t_node  *cur = NULL;
    t_node  *new_node = NULL;
    int     read_data;

    // data input
    while (1)
    {
        printf("input int : ");
        scanf("%d", &read_data);
        if (read_data < 1)
            break;
        
        new_node = malloc(sizeof(t_node));
        new_node->data = read_data;
        new_node->next = NULL;

        if (head == NULL)
            head = new_node;
        else
            tail->next = new_node;

        tail = new_node;
    }
    printf("\n");

    // data output
    printf("print all data!!!\n");
    if (head == NULL)
        printf("no data!!!\n");
    else
    {
        cur = head;
        printf("%d ", cur->data);

        while (cur->next != NULL)
        {
            cur = cur->next;
            printf("%d ", cur->data);
        }
    }
    printf("\n\n");

    // memory free
    if (head == NULL)
        return 0;
    else
    {
        t_node *del_node = head;
        t_node *del_next_node = head->next;

        printf("%d delete\n", head->data);
        free(del_node);

        while (del_next_node != NULL)
        {
            del_node = del_next_node;
            del_next_node = del_next_node->next;

            printf("%d delete\n", del_node->data);
            free(del_node); 
        }
    }
}
