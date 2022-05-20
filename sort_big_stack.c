/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/20 10:34:59 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_var *v)
{
	int	size;
	int	max_num;
	int	j;
	int	num;

	size = v->a_len;
	max_num = size - 1;
	while ((max_num >> v->max_bits) != 0)
		v->max_bits++;
	while (v->i < v->max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = v->a_tail->value;
			if (((num >> v->i) & 1) == 1)
				ra(v);
			else
				pb(v);
			j++;
		}
		while (v->b_tail != NULL)
			pa(v);
		v->i++;
	}
}
