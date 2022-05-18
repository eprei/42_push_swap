/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/18 11:03:56 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	a_is_sorted(t_var *v)
{
	t_node	*curr;

	curr = v->a_tail;
	if (v->a_tail == NULL)
		return (TRUE);
	while (curr->next != NULL)
	{	
		if (curr->value > curr->next->value)
			return (FALSE);
		curr = curr->next;
	}
	if (curr == v->a_head)
		return (TRUE);
	else
		return (FALSE);
}

int	b_is_sorted(t_var *v)
{
	t_node	*curr;

	curr = v->b_tail;
	if (v->b_tail == NULL)
		return (TRUE);
	while (curr->next != NULL)
	{	
		if (curr->value > curr->next->value)
			return (FALSE);
		curr = curr->next;
	}
	if (curr == v->b_head)
		return (TRUE);
	else
		return (FALSE);
}

char	**fill_split_with_args(t_var *v, int argc, char **argv)
{
	if (v->flag_single_arg == TRUE)
		v->split = ft_split(argv[1], ' ');
	else
		v->split = &argv[1];
	return (v->split);
}

void	check_args(t_var *v, int argc, char **argv)
{
	int	how_many_splits;

	how_many_splits = 0;
	check_digit(argv);
	v->split = fill_split_with_args(v, argc, argv);
	if (v->flag_single_arg == TRUE)
	{
		how_many_splits = count_splits(v);
		fn_check_overflow(how_many_splits, v->split);
	}
	if (v->flag_single_arg == FALSE)
		fn_check_overflow(argc, argv);
}

int	count_splits(t_var *v)
{
	int	i;

	i = 0;
	while (v->split[i])
		i++;
	return (i);
}
