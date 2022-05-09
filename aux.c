/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 17:32:04 by Emiliano         ###   ########.fr       */
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
