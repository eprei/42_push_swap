#include "push_swap.h"

void init_stack(t_node **tail, t_node **head, int value)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
        ft_exit("Error: malloc error during stack initialisation", 3);
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = NULL;
    *head = new_node;
    *tail = new_node;
}

void insert_beginning_stack_simple(t_node **tail, int value)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
        ft_exit("Malloc error inserting new module at the beginning of the stack", 4);
    new_node->value = value;
    new_node->prev = NULL;
    new_node->next = *tail;
    (*tail)->prev = new_node;
    *tail = new_node;  
}

void insert_end_stack(t_node **head, int value)
{
    t_node *new_node = malloc(sizeof(t_node));
    if (new_node == NULL)
        ft_exit("Malloc error inserting new module at the end of the stack", 5);
    new_node->value = value;
    new_node->next = NULL;
    new_node->prev = *head;
    (*head)->next = new_node;
    *head = new_node;
    
}

void deallocate_stack(t_node **tail, t_node **head)
{
    t_node *curr;
    
    curr = *tail;
    if (*tail == NULL)
        return;
    while (curr->next != NULL)
    {
        curr = curr->next;
        free(curr->prev);
    }
    free(curr);
    *tail = NULL;
    *head = NULL;
}

void swap_stack(t_node **tail)
{
    int i;
    int j;
    t_node *tmp;

    tmp = NULL;
    if ((*tail) && (*tail)->next)
    {
        tmp = *tail;
        i = (*tail)->value;
        j = (*tail)->next->value;
    //    tmp = *tail;
        (*tail)->value = j;
     //   tmp = *tail;
        (*tail)->next->value = i;
     //   (*tail) = tmp;  
    }
}