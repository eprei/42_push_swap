/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epresa-c <epresa-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:51:06 by epresa-c          #+#    #+#             */
/*   Updated: 2022/05/04 15:51:35 by epresa-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_node **tail)
{
	int		i;
	int		j;
	t_node	*tmp;

	tmp = NULL;
	if ((*tail) && (*tail)->next)
	{
		tmp = *tail;
		i = (*tail)->value;
		j = (*tail)->next->value;
		(*tail)->value = j;
		(*tail)->next->value = i;
	}
}

void	rotate_stack(t_node **tail, t_node **head)
{
	t_node	*tmp;

	tmp = *tail;
	insert_end_stack(head, (*tail)->value);
	(*tail) = (*tail)->next;
	remove_node(tmp);
}

void	reverse_rotate_stack(t_node **tail, t_node **head)
{
	t_node	*tmp;

	tmp = *head;
	insert_beginning_stack(tail, (*head)->value);
	(*head) = (*head)->prev;
	remove_node(tmp);
}

void	push_stack(t_node **tail_a, t_node **tail_b)
{
	t_node	*tmp;

	tmp = *tail_a;
	if (*tail_a == NULL)
		return ;
	insert_beginning_stack(tail_b, (*tail_a)->value);
	(*tail_a) = (*tail_a)->next;
	remove_node(tmp);
}
