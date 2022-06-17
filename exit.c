/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:44:35 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/18 11:08:57 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_exit_err(char *str, int err)
{
	ft_printf("%s\n", str);
	exit(err);
}

void	deallocate_stack(t_node **tail, t_node **head)
{
	t_node	*curr;

	curr = *tail;
	if (*tail == NULL)
		return ;
	while (curr->next != NULL)
	{
		curr = curr->next;
		free(curr->prev);
	}
	free(curr);
	*tail = NULL;
	*head = NULL;
}

void	remove_node(t_node *node)
{
	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	if (node->next != NULL)
	{
		node->next->prev = node->prev;
	}
	free(node);
	node = NULL;
}

void	deallocate_two_stacks_and_free_mallocs(t_var *v)
{
	int	i;

	i = 0;
	if (v->a_tail)
		deallocate_stack(&v->a_tail, &v->a_head);
	if (v->b_tail)
		deallocate_stack(&v->b_tail, &v->b_head);
	if (v->flag_single_arg == TRUE)
	{
		while (v->split[i])
			free(v->split[i++]);
		free(v->split);
		v->split = NULL;
	}
	free(v);
	v = NULL;
}
