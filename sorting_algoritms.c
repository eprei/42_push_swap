/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_algoritms.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/20 10:11:31 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_big_stack(t_var *v)
{
	int	size;
	int	max_num;
	int	max_bits;
	int	i;
	int	j;
	int	num;

	size = v->a_len;
	max_num = size - 1;
	max_bits = 0;
	i = 0;
	while ((max_num >> max_bits) != 0)
		max_bits++;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			num = v->a_tail->value;
			if (((num >> i) & 1) == 1)
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

void	case_2(t_var *v)
{
	sa(v);
	exit(0);
}

void	case_3(t_var *v)
{
	int	stack_0;
	int	stack_1;
	int	stack_2;

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

void	case_4(t_var *v)
{
    while(v->a_tail->value != 3)
        ra(v);
    pb(v);
    case_3(v);
    pa(v);
    ra(v);    
}

void	case_3_for_5(t_var *v)
{
	int	stack_0;
	int	stack_1;
	int	stack_2;

	stack_0 = v->a_tail->value;
	stack_1 = v->a_tail->next->value;
	stack_2 = v->a_tail->next->next->value;
	if (stack_0 == 2 && stack_1 == 4 && stack_2 == 3)
	{
		ra(v);
		sa(v);
		rra(v);
	}
	if (stack_0 == 3 && stack_1 == 2 && stack_2 == 4)
		sa(v);
	if (stack_0 == 3 && stack_1 == 4 && stack_2 == 2)
		rra(v);
	if (stack_0 == 4 && stack_1 == 2 && stack_2 == 3)
		ra(v);
	if (stack_0 == 4 && stack_1 == 3 && stack_2 == 2)
	{
		sa(v);
		rra(v);
	}
}
void	case_5(t_var *v)
{
	while (v->a_tail->value == 2 || v->a_tail->value == 3 || v->a_tail->value == 4)
		ra(v);
	pb(v);
	while (v->a_tail->value == 2 || v->a_tail->value == 3 || v->a_tail->value == 4)
		ra(v);
	pb(v);
	case_3_for_5(v);
	if (v->b_tail->value < v->b_tail->next->value)
		sb(v);	
	pa(v);
	pa(v);	
}
