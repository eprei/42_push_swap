/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Emiliano <Emiliano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:16 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/09 16:23:28 by Emiliano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     a_is_sorted(t_var *v)
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

char	**fill_args(t_var *v, int argc, char **argv)
{
	if (argc == 2)
		v->split = ft_split(argv[1], ' ');
	else
		v->split = &argv[1];
	return (v->split);
}

void    check_args(t_var *v, int argc, char **argv)
{
	
}

// void simplify_list(t_var *v)
// {
// 	int i;
// 	int j;
// 	int x;
	
// 	i = 0;
// 	j = 0;
// 	x = 0;
	
// }