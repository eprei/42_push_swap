/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algoritms.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/11 14:12:26 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_big_stack(t_var *v)
{
    int size = v->a_len;
    int max_num = size - 1;
    int max_bits = 0; 
    int i = 0;
        
    while ((max_num >> max_bits) != 0)
        max_bits++;
    
    while (i < max_bits)
    {
        int j = 0;
        while (j < size)
        {
            int num = v->a_tail->value;
            if (((num >> i)&1) == 1)
                ra(v);
            else
                pb(v);
            j++;
        }
        while (v->b_tail != NULL)
            pa(v); 
        i++;
    }
}

void     case_2(t_var *v)
{
        sa(v);
        exit(0);
}

void    case_3(t_var *v)
{
    int stack_0;
    int stack_1;
    int stack_2;
    
    stack_0 = v->a_tail->value;
    stack_1 = v->a_tail->next->value;
    stack_2 = v->a_tail->next->next->value;

    if (stack_0 == 0 && stack_1 == 2 && stack_2 == 1)
    {
        ra(v);
        sa(v);
        rra(v);
    }
    if (stack_0 == 1 && stack_1 == 0 && stack_2 == 2)
        sa(v);
    if (stack_0 == 1 && stack_1 == 2 && stack_2 == 0)
        rra(v);
    if (stack_0 == 2 && stack_1 == 0 && stack_2 == 1)
        ra(v);
    if (stack_0 == 2 && stack_1 == 1 && stack_2 == 0)
    {
        sa(v);   
        rra(v);
    }
}

void    case_5(t_var *v)
{
    
}
