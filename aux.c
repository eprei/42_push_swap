/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/10 13:45:54 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    print_stack_a(t_var *v)
{
    t_node *curr;
    int     i;
    
    i = 0;
    curr = v->a_tail;
    ft_printf("\nSTACK A\n");
	while (curr != NULL)
	{
        ft_printf("A[%d] = %d\n", i++, curr->value);
        curr = curr->next;
    }
}

void    print_stack_b(t_var *v)
{
    t_node *curr;
    int     i;
    
    i = 0;
    curr = v->b_tail;
    ft_printf("\nSTACK B\n");
	while (curr != NULL)
	{
        ft_printf("B[%d] = %d\n", i++, curr->value);
        curr = curr->next;
    }
}

void    simplify_stack(t_var *v)
{
    t_node  *curr_a;
    t_node  *curr_b;
    int     i;

    curr_a = v->a_tail;
    order_stack_b(v);
    while (curr_a != NULL)
    {
        i = 0;
        curr_b = v->b_tail;
        while (curr_b != NULL)
        {
            if (curr_a->value == curr_b->value)
                curr_a->value = i;
            curr_b = curr_b->next;
            i++;
        }
        curr_a = curr_a->next;
    } 
    deallocate_stack(&v->b_tail, &v->b_head);
}

void    order_stack_b(t_var *v)
{
    int     tmp;
    t_node  *curr1;
    int     i;
    
    i = v->a_len;
    copy_stack_a_to_b(v);
    while (i > 0)
    {
        curr1 = v->b_tail;
        while (curr1->next != NULL)
        {
            tmp = 0;
            if (curr1->value > curr1->next->value)
            {
                tmp = curr1->value;
                curr1->value = curr1->next->value;
                curr1->next->value = tmp;
            }
            curr1 = curr1->next;
        }
        i--;
    }
}

void    copy_stack_a_to_b(t_var *v)
{
    t_node  *curr_a;
    
    curr_a = v->a_tail->next;
    start_stack(&v->b_tail, &v->b_head, v->a_tail->value);
    while (curr_a != NULL)
    {
        insert_end_stack(&v->b_head, curr_a->value);
        curr_a = curr_a->next;
    }
}
