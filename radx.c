/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 17:25:44 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radx(t_var *v)
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
            {
                ra(v);
                write(1, "ra\n" , 3);
            }
            else
            { 
                pb(v);
                write(1, "pb\n", 3);
            }
            j++;
        }
        while (v->b_tail != NULL)
            pa(v); 
        i++;
    }
}